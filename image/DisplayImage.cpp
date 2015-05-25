#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;
const int DELAY_BLUR = 100;
const int MAX_KERNEL_LENGTH = 31;
const int lowThreshold = 100;
const int ratio = 3;
const int kernel_size = 3;
Mat& ScanImageAndReduceC (Mat& I, const uchar* const table) {
    CV_Assert(I.depth() != sizeof(uchar));
    
    int channels = I.channels();

    int nRows = I.rows;
    int nCols = I.cols * channels;

    if (I.isContinuous()) {
        nCols *= nRows;
        nRows = 1;
    }

    int i, j;
    uchar* p;

    for (i = 0; i < nRows; ++i) {
        p = I.ptr<uchar>(i);
        for (j = 0; j < nCols; ++j) {
            p[j] = table[p[j]];
        }
    }
    return I;
}
Mat Sharpen (const Mat& myImage) {
    CV_Assert (myImage.depth() == CV_8U);
    Mat Result;
    Result.create(myImage.size(), myImage.type());
    const int nChannels = myImage.channels();

    for (int j = 1; j < myImage.rows - 1; ++j){
        const uchar* previous = myImage.ptr<uchar>(j - 1);
        const uchar* current = myImage.ptr<uchar>(j);
        const uchar* next = myImage.ptr<uchar>(j + 1);

        uchar* output = Result.ptr<uchar>(j);

        for (int i = nChannels; i < nChannels * (myImage.cols - 1); ++i) {
            *output++ = saturate_cast<uchar>(5 * current[i]
                        - current[i - nChannels] - current[i + nChannels]
                        - previous[i] - next[i]);
        }
    }

    Result.row(0).setTo(Scalar(0));
    Result.row(Result.rows - 1).setTo(Scalar(0));
    Result.col(0).setTo(Scalar(0));
    Result.col(Result.cols - 1).setTo(Scalar(0));

    return Result;
}

Mat contrastAndBrightness(const Mat& image) {
    Mat new_image = Mat::zeros(image.size(), image.type());
    double alpha; // contrast control
    int beta; // brightness control
    cout << "Enter the alpha value [1.0 - 3.0]: " << endl;
    cin >> alpha;
    cout << "Enter the beta value [1 - 100]: " << endl;
    cin >> beta;
    for (int row = 0; row < new_image.rows; ++row) {
        for (int col = 0; col < new_image.cols; ++col) {
            for (int c = 0; c < new_image.channels(); ++c ) {
                new_image.at<Vec3b>(row, col)[c] = 
                    saturate_cast<uchar>(alpha * (image.at<Vec3b>(row, col)[c])
                            + beta);
            }
        } 
    }
    return new_image;
}

int display_result (int delay, Mat& image, string window_name) {
    imshow(window_name, image);
    int c = waitKey(delay);
    if (c >= 0) return -1;
    return 0;
}

void CannyThreshold(Mat& image, Mat& detected_edges, Mat& dist, 
                    string w_name, int, void*) {
    blur(image, detected_edges, Size(3, 3));
    Canny(detected_edges, detected_edges, lowThreshold, lowThreshold * ratio,
            kernel_size);
    dist = Scalar::all(0);
    image.copyTo(dist, detected_edges);
    imshow(w_name, dist);
}

int main (int argc, char** argv) {

    Mat image = Mat(512, 512, CV_8UC3);
    image = imread("/home/xian/Desktop/cpp/image/lena.png",
                   1);

    if (!image.data){
        cout << "No image data " << endl;
        return -1;
    }
    /*
    namedWindow ("Display Image", WINDOW_AUTOSIZE);
    imshow ("Display Image", image);
    Mat img(500,1000,CV_8UC3, Scalar(0,100,0));
    uchar table[256];
    //img = ScanImageAndReduceC(image, table);
    img = Sharpen(image);
    Mat img2;
    Mat kern = (Mat_<char>(3,3) << 0, -1, 0,
                                  -1,  5,-1,
                                   0, -1, 0);
    filter2D(image, img2, image.depth(), kern);
    namedWindow ("new img", CV_WINDOW_AUTOSIZE);
    imshow ("new img", img2);
    */
    /*
    //adding two pics together
    Mat windows = Mat(128, 128, CV_8UC3);
    Mat apple = Mat(128, 128, CV_8UC3);
    Mat blend_result = Mat(128, 128, CV_8UC3);
    windows = imread("/home/xian/Desktop/cpp/image/windows.png", 1);
    apple = imread("/home/xian/Desktop/cpp/image/apple.jpg", 1);
    if (!windows.data) cout << "Error loading windows.png!" << endl;
    if (!apple.data) cout << "Error loading apple.png!" << endl;

    double alpha = 0.5; 
    double beta;
    double input;
    cout << "Enter alpha [0 - 1]:" << endl;
    cin >> input;
    if (input >= 0.0 && input <= 1.0) alpha = input;

    namedWindow("Linear Blend", WINDOW_AUTOSIZE);
    beta = 1.0 - alpha;
    addWeighted(windows, alpha, apple, beta, 0.0, blend_result);
    imshow("Linear Blend", blend_result);
    waitKey(0);
    destroyWindow("Display Image");
    */
    /*
    // contrast and brightness
    Mat image2;
    image2 = contrastAndBrightness(image);
    namedWindow("New Image", 1);
    imshow("New Image", image2);
    waitKey(0);
    */
    /*
    // Blur
    Mat dist = Mat::zeros(image.size(), image.type());
    for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2) {
        blur(image, dist, Size(i, i), Point(-1, -1));
        if (display_result(DELAY_BLUR, dist, "Homogeneous Blur") != 0)
            return 0;
    }

    for (int i = 1; i < MAX_KERNEL_LENGTH; i += 2) {
        GaussianBlur(image, dist, Size(i, i), 0, 0);
        if (display_result(DELAY_BLUR, dist, "GaussianBlur") != 0)
            return 0;
    }

    for (int i = 1; i < MAX_KERNEL_LENGTH; i += 2) {
        medianBlur(image, dist, i);
        if (display_result(DELAY_BLUR, dist, "medianBlur") != 0) 
            return 0;
    }

    for (int i = 1; i < MAX_KERNEL_LENGTH; i += 2) {
        bilateralFilter(image, dist, i, i * 2, i / 2);
        if (display_result(DELAY_BLUR, dist, "bilateralFilter") != 0)
            return 0;
    }
    */
    // Edge Detection
    Mat dist, detected_edges;
    dist.create(image.size(), image.type());
    namedWindow("edge detection", CV_WINDOW_AUTOSIZE);
    CannyThreshold(image, detected_edges, dist,
                   "edge detection", 0, 0);
    waitKey(0);

    return 0;
}

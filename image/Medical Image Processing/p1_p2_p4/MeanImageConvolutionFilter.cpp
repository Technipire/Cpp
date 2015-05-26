#include <iostream>
#include "MeanImageConvolutionFilter.h"
#include "ImageBase.h"

MeanImageConvolutionFilter::MeanImageConvolutionFilter()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            window[i][j] = 1.0 / 9.0;
        }
    }
    this->SetConvolutionWindow(window);
}

MeanImageConvolutionFilter::~MeanImageConvolutionFilter()
{

}

ImageBase* MeanImageConvolutionFilter::DoFiltering(ImageBase* input)
{
    return ImageConvolutionFilter::DoFiltering(input);
}

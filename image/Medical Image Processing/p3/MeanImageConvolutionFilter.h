#ifndef __MEAN_IMAGE_CONVOLUTION_FILTER_H__
#define __MEAN_IMAGE_CONVOLUTION_FILTER_H__
#include "ImageConvolutionFilter.h"

class ImageBase;

class MeanImageConvolutionFilter:public ImageConvolutionFilter
{
    public:
        MeanImageConvolutionFilter();
        ~MeanImageConvolutionFilter();
        void DoFiltering(ImageBase* input,
                         ImageBase* result);
    private:
        float window[3][3];

};


#endif

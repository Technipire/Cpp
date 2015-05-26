#ifndef __IMAGE_FILTER_BASE_H__
#define __IMAGE_FILTER_BASE_H__
#include "Image2D.h"
class ImageFilterBase
{
    public:
        ImageFilterBase(){};
        ~ImageFilterBase();
        ImageBase* PrepareOutput(ImageBase* input);
        virtual void DoFiltering(ImageBase* input, ImageBase* output) = 0;
        virtual void SetConvolutionWindow(float window[3][3]) = 0;
};
#endif

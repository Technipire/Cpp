#ifndef __IMAGE_CONVOLUTION_FILTER_H__
#define __IMAGE_CONVOLUTION_FILTER_H__

#include "ImageFilterBase.h"

class ImageBase;

class ImageConvolutionFilter : public ImageFilterBase
{
 public:
  ImageConvolutionFilter();
  ~ImageConvolutionFilter();

  void SetConvolutionWindow(float window[3][3]);
  virtual ImageBase* DoFiltering(ImageBase* input);

 protected:
  float ConvolutionWindow[3][3];
};

#endif

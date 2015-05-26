#include "ImageConvolutionFilter.h"

#include <iostream>

#include "ImageBase.h"

ImageConvolutionFilter::ImageConvolutionFilter()
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
	{
      this->ConvolutionWindow[i][j] = 0;
    }
  }
}

ImageConvolutionFilter::~ImageConvolutionFilter()
{

}

void ImageConvolutionFilter::SetConvolutionWindow(float window[3][3])
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
	{
      this->ConvolutionWindow[i][j] = window[i][j];
    }
  }
}

void ImageConvolutionFilter::DoFiltering(ImageBase* input, 
                                               ImageBase* output)
{
  unsigned int* imageSize = output->GetSize();

  unsigned char* outputBuffer = output->GetBufferPointer();
  unsigned char* inputBuffer = input->GetBufferPointer();

  float val;
  for(int i = 1; i < imageSize[0] - 1; i++)
  {
    for(int j = 1; j < imageSize[1] - 1; j++)
    {
      val = 0;
      for(int a = 0; a < 3; a++)
          {
                for(int b = 0; b < 3; b++)
                {
                        val += this->ConvolutionWindow[a][b] * inputBuffer[(j+b)*imageSize[0]+(i+a)];
                }
      }
      outputBuffer[j * imageSize[0] + i] =  val;
    }
      }
  

}

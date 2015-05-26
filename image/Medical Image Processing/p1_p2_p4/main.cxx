#include <stdio.h>
#include <iostream>
#include "Image2D.h"
#include "ImageConvolutionFilter.h"
//#include "MeanImageConvolutionFilter.h"
int main()
{
  ImageFilterBase* filter = new ImageConvolutionFilter(); // comment out this line for p2
  //MeanImageConvolutionFilter* filter = new MeanImageConvolutionFilter();
  ImageBase* input = new Image2D();

  char inputFilename[256] = "lena.raw";
  char outputFilename[256] = "out.raw";

  float laplacianWindow[3][3] = {{-0.125, -0.125, -0.125},
				 {-0.125, 1, -0.125},
				 {-0.125, -0.125, -0.125}};

  float sobelHWindow[3][3] = {{-1, -2, -1},
			      { 0,  0,  0},
			      {-1, -2, -1}};

  float meanWindow[3][3] = {{1.0/9.0, 1.0/9.0, 1.0/9.0 },
			    {1.0/9.0, 1.0/9.0, 1.0/9.0 },
			    {1.0/9.0, 1.0/9.0, 1.0/9.0 }};

  float gaussianWindow[3][3] = {{1.0/16.0, 2.0/16.0, 1.0/16.0 },
				{2.0/16.0, 4.0/16.0, 2.0/16.0 },
				{1.0/16.0, 2.0/16.0, 1.0/16.0 }};

  unsigned int size[3] = {256, 256};
  input->SetSize(size);
  if (!input->ReadFile(inputFilename))
  {
      delete input;
      delete filter;
      return 1;
  }
  ((ImageConvolutionFilter*)filter)->SetConvolutionWindow(laplacianWindow);// coment out this line for p2
  ImageBase* output = filter->DoFiltering(input);
  if (!output->WriteFile(outputFilename))
  {
      delete input;
      delete output;
      delete filter;
      return 1;
  }

  delete input;
  delete output;
  delete filter;
}

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <thread>
#include <string.h>
#include "Image2D.h"
//#include "ImageConvolutionFilter.h"
#include "MeanImageConvolutionFilter.h"
using namespace std;
int main()
{
  //ImageFilterBase* filter = new ImageConvolutionFilter();
  MeanImageConvolutionFilter* filter = new MeanImageConvolutionFilter();
  ImageBase* input = new Image2D();

  char inputFilename[256] = "lena.raw";

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
  input->ReadFile(inputFilename);
  //((ImageConvolutionFilter*)filter)->SetConvolutionWindow(laplacianWindow);
  ImageBase* output = input->Clone(true);
  int numThreads = 3;
  for (int i = 0; i < numThreads; ++i) {
      string fn = to_string(i) + "out.raw";
      char outputFilename[256];
      strncpy(outputFilename, fn.c_str(),sizeof(outputFilename));
      outputFilename[sizeof(outputFilename) - 1] = 0;
      thread t {&MeanImageConvolutionFilter::DoFiltering, filter, input, output}; // we could also use parentheses here after t
      t.join();
      output->WriteFile(outputFilename);
      
  }
  delete input;
  delete output;
  delete filter;
  return 0;
}

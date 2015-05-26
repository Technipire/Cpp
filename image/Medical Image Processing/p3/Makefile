CC=g++

CFLAGS=

all:main

main: ImageBase.o Image2D.o ImageFilterBase.o ImageConvolutionFilter.o main.o
	$(CC) $(CFLAGS) -o $@ ImageBase.o Image2D.o ImageFilterBase.o ImageConvolutionFilter.o main.o

.cpp.o: 
	$(CC) $(CFLAGS) -c $< -o $@

ImageBase.o: ImageBase.h ImageBase.cxx

Image2D.o: Image2D.h Image2D.cxx

ImageFilterBase.o: ImageFilterBase.h ImageFilterBase.cxx

ImageConvolutionFilter.o: ImageConvolutionFilter.h ImageConvolutionFilter.cxx
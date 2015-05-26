#include "ImageBase.h"
#include <stdio.h>
#include <fstream>
#include <iostream>
ImageBase::ImageBase()
{
    this->Buffer = new unsigned char [INITIAL_BUFFER_SIZE];
    this->SizeLength = 3;
    this->Dimension = 0;
    this->Size = new unsigned int [SizeLength];
    for (unsigned int i = 0; i < SizeLength; ++i){
        this->Size[i] = 0;
      }
}

ImageBase::ImageBase(unsigned int dim)
{
  this->Buffer = new unsigned char [INITIAL_BUFFER_SIZE];
  this->SizeLength = 3;
  this->Dimension = dim;
  this->Size = new unsigned int [SizeLength];
  for (unsigned int i = 0; i < SizeLength; ++i){
      this->Size[i] = 0;
  }
}

ImageBase::~ImageBase()
{
  if (this->Buffer)
  {
      delete this->Buffer;
  }
  if (this->Size)
  {
      delete this->Size;
  }
}

void ImageBase::SetSize(unsigned int dim[3])
{
  if(dim[0] != this->Size[0] ||
     dim[1] != this->Size[1] ||
     dim[2] != this->Size[2])
  {
    this->Size[0] = dim[0];
    this->Size[1] = dim[1];
    this->Size[2] = dim[2];

    this->Reallocate();
  }
}

unsigned int* ImageBase::GetSize()
{
    return this->Size;
}

void ImageBase::SetLengthOfSize(unsigned int newSize) 
{
    this->SizeLength = newSize;
}

void ImageBase::ReadFile(char* filename)
{
  std::fstream fin;
  fin.open(filename, std::ios::in|std::ios::binary);
  fin.seekg(0, fin.end);
  this->BufferSize = fin.tellg();
  fin.seekg(0, fin.beg);
  fin.read((char*)this->Buffer,this->BufferSize);

  fin.close();
}

void ImageBase::WriteFile(char* filename)
{
  std::fstream fout;
  fout.open(filename, std::ios::out|std::ios::binary);
  fout.write((char*)this->Buffer, this->BufferSize);
  fout.close();
}

void ImageBase::paramsInfo()
{
    std::cout << "BufferSize: " << BufferSize << std::endl;
    std::cout << "Dimension: " << Dimension << std::endl;
    std::cout << "Size array: " << std::endl;
    for (unsigned int i = 0; i < SizeLength; ++i)
        std::cout << Size[i] << std::endl;
}

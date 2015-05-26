#include "ImageBase.h"
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <iostream>
ImageBase::ImageBase()
{
    this->Buffer = NULL;
    this->SizeLength = 3;
    this->Dimension = 0;
    this->Size = new unsigned int [SizeLength];
    for (unsigned int i = 0; i < SizeLength; ++i){
        this->Size[i] = 0;
      }
}

ImageBase::ImageBase(unsigned int dim)
{
  this->Buffer = NULL;
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

bool ImageBase::ReadFile(char* filename)
{
    if (strlen(filename) == 0) {
        std::cerr << "No filename specified for file reading!" << std::endl;
        return false;
    }
  std::fstream fin;
  fin.open(filename, std::ios::in|std::ios::binary);
  fin.seekg(0, fin.end);
  this->BufferSize = fin.tellg();
  fin.seekg(0, fin.beg);
  this->Buffer = new unsigned char [this->BufferSize];
  fin.read((char*)this->Buffer,this->BufferSize);
  if (!fin)
  {
      std::cerr << "Reading file" << filename << " failed!" << std::endl;
      return false;
  }
  fin.close();
  return true;
}

bool ImageBase::WriteFile(char* filename)
{
  if (strlen(filename) == 0) {
      std::cerr << "No filename specified for file writing!" << std::endl;
      return false;
  }

  std::fstream fout;
  fout.open(filename, std::ios::out|std::ios::binary);
  fout.write((char*)this->Buffer, this->BufferSize);
  if (!fout) 
  {
      std::cerr << "Writing file " << filename << " failed!" << std::endl;
      return false;
  }
  fout.close();
  return true;
}

void ImageBase::paramsInfo()
{
    std::cout << "BufferSize: " << BufferSize << std::endl;
    std::cout << "Dimension: " << Dimension << std::endl;
    std::cout << "Size array: " << std::endl;
    for (unsigned int i = 0; i < SizeLength; ++i)
        std::cout << Size[i] << std::endl;
}

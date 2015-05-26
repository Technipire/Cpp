#include<iostream>
#include "Image2D.h"
using namespace std;
Image2D::Image2D():ImageBase(){}

void Image2D::Reallocate() {
    int length = GetLengthOfSize();
    unsigned int* temp = new unsigned int[length * 2];
    copy(Size, Size + length, temp);
    delete [] Size;
    Size = temp;
    SetLengthOfSize(length * 2);

}

ImageBase* Image2D::Clone(bool copyBuffer) {
    ImageBase* newImg = new Image2D();
    newImg->SetLengthOfSize(this->GetLengthOfSize());
    copy(this->Size, this->Size + this->GetLengthOfSize(), newImg->GetSize());
    if (copyBuffer) {
        newImg->SetBufferSize(this->BufferSize);
        unsigned char* newBuffer = new unsigned char[newImg->GetBufferSize()];
        newImg->SetBuffer(newBuffer);
        copy(this->Buffer, this->Buffer + this->BufferSize, newImg->GetBufferPointer());
    }
    return newImg;
}

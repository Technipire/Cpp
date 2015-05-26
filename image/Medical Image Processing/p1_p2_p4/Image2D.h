#ifndef __IMAGE2D_H__
#define __IMAGE2D_H__
#include "ImageBase.h"

class Image2D : public ImageBase{
    public:
        Image2D();
        void Reallocate();
        ImageBase* Clone(bool copyBuffer = false);


}; 
#endif

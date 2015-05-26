#include <iostream>
#include "ImageFilterBase.h"

ImageFilterBase::~ImageFilterBase()
{
    
}

ImageBase* ImageFilterBase::PrepareOutput(ImageBase* input)
{
    return input->Clone(true);
}

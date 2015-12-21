#ifndef CONVENTIONAL_GARDEN__H__
#define CONVENTIONAL_GARDEN__H__

#include "garden.h"
#include "conventional_tomato.h"
class conventional_garden : public garden
{
    public:
        virtual conventional_tomato* make_tomato();
};

#endif

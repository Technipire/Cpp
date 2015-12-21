#include "garden.h"
#include "organic_tomato.h"

class organic_garden : public garden
{
    public:
        virtual organic_tomato* make_tomato();
};

#include "conventional_garden.h"

conventional_tomato* conventional_garden::make_tomato()
{
        return new conventional_tomato(3, 1);
}


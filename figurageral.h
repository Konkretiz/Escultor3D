#ifndef FIGURAGERAL_H
#define FIGURAGERAL_H

#include "sculptor.h"

class FiguraGeral
{
public:
    FiguraGeral();
     virtual void draw(Sculptor& t) = 0;
};


#endif // FIGURAGERAL_H

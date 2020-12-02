#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "figurageral.h"

class CutVoxel :
    public FiguraGeral
{
    int m_x, m_y, m_z;
public:
    CutVoxel(int x, int y, int z);
    void draw(Sculptor& t) override;
};

#endif // CUTVOXEL_H

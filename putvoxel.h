#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageral.h"


class PutVoxel : public FiguraGeral
{
    int m_x, m_y, m_z;
    float m_r, m_g, m_b, m_a;

public:
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    void draw(Sculptor& t) override;
};

#endif // PUTVOXEL_H

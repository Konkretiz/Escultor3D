#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageral.h"

class CutEllipsoid :
    public FiguraGeral
{
    int	m_x0, m_y0, m_z0,
        m_rdX, m_rdY, m_rdZ;
public:
    CutEllipsoid(int x0, int y0, int z0, int rdX, int rdY, int rdZ);
    void draw(Sculptor& t) override;
};
#endif // CUTELLIPSOID_H

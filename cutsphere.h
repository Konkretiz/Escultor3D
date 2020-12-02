#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageral.h"

/**
* @file CutSphere.h
* @brief this header file will contain all required
* definitions and basic utilities functions for cutan Sphere shaped object in the sculpture.
*
*/
class CutSphere : public FiguraGeral
{
    int m_x0, m_y0, m_z0, m_rd;
public:
    CutSphere(int x0, int y0, int z0, int rd);
    void draw(Sculptor& t) override;

};

#endif // CUTSPHERE_H

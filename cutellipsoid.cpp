#include "cutellipsoid.h"

/*
Método utilizado para "cortar" elipsóide de raio (rx,ry,rz) e centro (x,y,z).
Parâmetros:
rdX - Inteiro referente ao tamanho do raio no eixo x
rdY - Inteiro referente ao tamanho do raio no eixo y
rdZ - Inteiro referente ao tamanho do raixo no eixo z
x - Inteiro referente ao centro no eixo x
y - Inteiro referente ao centro no eixo y
z - Inteiro referente ao centro no eixo z
*/

CutEllipsoid::CutEllipsoid(int x0, int y0, int z0, int rdX, int rdY, int rdZ) : m_x0(x0), m_y0(y0), m_z0(z0), m_rdX(rdX), m_rdY(rdY), m_rdZ(rdZ)
{
}

/*
 Esse método é utilizado para modificar as variáveis e cortar o elipsóide no objeto "t"
*/
void CutEllipsoid::draw(Sculptor& t){

    int i, j, k;
    double DisX, DisY, DisZ;

    for (i = m_z0-m_rdZ; i < m_z0 + m_rdZ; i++) {
        DisX = ((double)(i - m_z0)) / (double)(m_rdZ);
        for (j = m_y0 - m_rdY; j < m_y0 + m_rdY; j++) {
            DisY = ((double)(j - m_y0)) / (double)(m_rdY);
            for (k = m_x0 - m_rdX; k < m_x0 + m_rdX; k++) {
                DisZ = ((double)(k - m_x0)) / (double)(m_rdX);
                if ((DisX * DisX + DisY * DisY + DisZ * DisZ) <= 1.00) {
                    t.cutVoxel(i, j, k);
                }
            }
        }
    }
}


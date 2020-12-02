#include "putellipsoid.h"

/*
Método usado para criar elipsóide de raio (rx, ry, rz) e centro (x, y, z) com os métodos de cor e transparência/opacidade
Parâmetros:
x0 - Inteiro referente à coordenada no eixo x do centro da elipsóide
y0 - Inteiro referente à coordenada no eixo y do centro da elipsóide
z0 - Inteiro referente à coordenada no eixo z do centro da elipsóide
rdX - Inteiro referente ao tamanho do raio no eixo x
rdY - Inteiro referente ao tamanho do raio no eixo y
rdZ - Inteiro referente ao tamanho do raio no eixo z
r,g,b [0,1] correspondem à ausência total(0) ou presença total(1) dos componentes de cor vermelha, verde e azul respectivamente
a [0,1] corresponde à transparência total(0) ou opacidade total(1)
*/

PutEllipsoid::PutEllipsoid(int x0, int y0, int z0,int rdX,int rdY,int rdZ, float r, float g, float b, float a)
    : m_x0(x0), m_y0(y0), m_z0(z0),
    m_rdX(rdX), m_rdY(rdY), m_rdZ(rdZ),
    m_r(r), m_g(g), m_b(b), m_a(a)
{
}
/*
Método para desenhar no objeto t.
*/
void PutEllipsoid::draw(Sculptor& t)
{

    int i, j, k;
    double DisX, DisY, DisZ;

    t.setColor(m_r, m_g, m_b, m_a);

    for (i = m_z0 - m_rdZ; i < m_z0 + m_rdZ; i++) {
        DisX = ((double)(i - m_z0)) / (double)(m_rdZ);
        for (j = m_y0 - m_rdY; j < m_y0 + m_rdY; j++) {
            DisY = ((double)(j - m_y0)) / (double)(m_rdY);
            for (k = m_x0 - m_rdX; k < m_x0 + m_rdX; k++) {
                DisZ = ((double)(k - m_x0)) / (double)(m_rdX);
                if ((DisX * DisX + DisY * DisY + DisZ * DisZ) <= 1.00) {
                    t.putVoxel(i, j, k);
                }
            }
        }
    }
}

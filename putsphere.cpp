#include "putsphere.h"

/*
Método utilizado para desenhar esfera de raio (rx,ry,rz) e centro (x, y, z), com parâmetros de cor e transparência/opacidade.
Parâmetros:
x0 - Inteiro referente à coordenada do centro no eixo x
y0 - Inteiro referente à coordenada do centro no eixo y
z0 - Inteiro referente à coordenada do centro no eixo z
rd - Inteiro referente ao tamanho do raio da esfera
r,g,b [0,1] correspondem à ausência total(0) ou presença total(1) dos componentes de cor vermelha, verde e azul respectivamente
a [0,1] corresponde à transparência total(0) ou opacidade total(1)
*/


PutSphere::PutSphere(int x0, int y0, int z0, int rd, float r, float g, float b, float a)
    : m_x0(x0), m_y0(y0), m_z0(z0), m_rd(rd),
    m_r(r), m_g(g), m_b(b), m_a(a)
{
}

/*
Método utilizado para desenhar no objeto t, caso a distância do centro a um ponto seja >= raio(ou seja, exterior à esfera)
*/
void PutSphere::draw(Sculptor& t)
{
    int i, j, k;
    float DisX, DisY, DisZ;

    t.setColor(m_r, m_b, m_b, m_a);

    for (i = m_z0 - m_rd; i < m_z0 + m_rd; i++) {
        DisZ = (static_cast<float>(i - m_z0)) / (static_cast<float>(m_rd));
        for (j = m_y0 - m_rd; j < m_y0 + m_rd; j++) {
            DisY = (static_cast<float>(j - m_y0)) / (static_cast<float>(m_rd));
            for (k = m_x0 - m_rd; k < m_x0 + m_rd; k++) {
                DisX = (static_cast<float>(k - m_x0)) / (static_cast<float>(m_rd));
                if ((DisX * DisX + DisY * DisY + DisZ * DisZ) <= 1.00) {
                    t.putVoxel(i, j, k);
                }
            }
        }
    }
}

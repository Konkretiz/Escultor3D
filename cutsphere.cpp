#include "cutsphere.h"

/*
Método utilizado para "cortar" esfera de raio rd e centro (x, y, z)
Parâmetros:
x0 - Inteiro referente ao centro no eixo x
y0 - Inteiro referente ao centro no eixo y
z0 - Inteiro referente ao centro no eixo z
rd - Inteiro referente ao tamanho do raio da esfera
*/
CutSphere::CutSphere(int x0, int y0, int z0, int rd): m_x0(x0), m_y0(y0), m_z0(z0), m_rd(rd)
{
}

/*
Esse método será utilizado para modificar as variáveis
Em seguida, corta a esfera no objeto t se a distância do centro a um ponto é >= raio(ou seja, exterior à esfera)
*/
void CutSphere::draw(Sculptor& t)
{
    int i, j, k;
    float DisX, DisY, DisZ;

    for (i = m_z0-m_rd; i < m_z0+m_rd; i++) {
        DisZ = ((float)(i - m_z0)) / ((float)(m_rd));
        for (j = m_y0 - m_rd; j < m_y0 + m_rd; j++) {
            DisY = ((float)(j - m_y0)) / ((float)(m_rd));
            for (k = m_x0 - m_rd; k< m_x0 + m_rd; k++) {
                DisX = ((float)(k - m_x0)) / ((float)(m_rd));
                if ((DisX * DisX + DisY * DisY + DisZ * DisZ) <= 1.00) {
                    t.cutVoxel(i, j, k);
                }
            }
        }
    }
}


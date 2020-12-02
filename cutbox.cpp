#include "cutbox.h"

/* Método para "cortar" cubo
Parâmetros:
x0 - Inteiro de coordenada inicial do eixo x
x1 - Inteiro de coordenada final do eixo x
y0 - Inteiro de coordenada inicial do eixo y
y1 - Inteiro de coordenada final do eixo y
z0 - Inteiro de coordenada inicial do eixo z
z1 - Inteiro de coordenada final do eixo z
*/

CutBox::CutBox(int x0, int y0, int z0, int x1, int y1, int z1)
    : m_x0(x0), m_y0(y0), m_z0(z0),
    m_x1(x1), m_y1(y1), m_z1(z1)
{
}

/*
Esse método será utilizado para modificar as variáveis
Em seguida o método de sobrecarga "draw" para CutBox usando o objeto "t".
*/
void CutBox::draw(Sculptor& t)
{
    int i, j, k;
    for (i = m_z0; i < m_z1; i++) {
        for (j = m_y0; j < m_y1; j++) {
            for (k = m_x0; k < m_x1; k++) {
                t.cutVoxel(i, j, k);
            }
        }
    }
}

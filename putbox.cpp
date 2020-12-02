#include "putbox.h"

/*Método para modificar as variáveis e "desenhar" cubo com parâmetros de transparência e cor.
Parâmetros:
x0 - Inteiro referente à coordenada inicial do eixo x
x1 - Inteiro referente à coordenada final do eixo x
y0 - Inteiro referente à coordenada inicial do eixo y
y1 - Inteiro referente à coordenada final do eixo y
z0 - Inteiro referente à coordenada inicial do eixo z
z1 - Inteiro referente à coordenada final do eixo z
r,g,b [0,1] correspondem à ausência total(0) ou presença total(1) dos componentes de cor vermelha, verde e azul respectivamente
a [0,1] corresponde à transparência total(0) ou opacidade total(1)
*/
PutBox::PutBox(int x0, int y0, int z0, int x1, int y1, int z1, float r, float g, float b, float a)
  : m_x0(x0), m_y0(y0), m_z0(z0),
    m_x1(x1), m_y1(y1), m_z1(z1),
    m_r(r), m_g(g), m_b(b), m_a(a)
{
}

/*
Esse método desenha o cubo no objeto t.
*/
void PutBox::draw(Sculptor& t)
{
    t.setColor(m_r, m_g, m_b, m_a);
    int i, j, k;
    for (i = m_z0; i < m_z1; i++) {
        for (j = m_y0; j < m_y1; j++) {
            for (k = m_x0; k < m_x1; k++) {
                t.putVoxel(i, j, k);
            }
        }
    }
}
}

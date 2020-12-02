#include "putvoxel.h"

/*
Método para criar voxel/matriz de coordenadas (x, y ,z)
Parâmetros:
x - Inteiro correspondente à coordenada do eixo x
y - Inteiro correspondente à coordenada do eixo y
z - Inteiro correspondente à coordenada do eixo z
r,g,b [0,1] correspondem à ausência total(0) ou presença total(1) dos componentes de cor vermelha, verde e azul respectivamente
a [0,1] corresponde à transparência total(0) ou opacidade total(1)
*/

PutVoxel::PutVoxel(int x, int y, int z, float r, float g, float b, float a)
    : m_x(x), m_y(y), m_z(z),
m_r(r), m_g(g), m_b(b), m_a(a)
{
}
/*
Método para desenhar no objeto t.
*/
void PutVoxel::draw(Sculptor& t) {
    t.setColor(m_r, m_g, m_b, m_a);
    t.putVoxel(m_z, m_y, m_x);

}

#include <string.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "sculptor.h"
#include "figurageral.h"


using namespace std;

//Tentei reverter o meu projeto não finalizado para atender a unidade 2, mas não consegui resolver um erro na main a tempo.

int main()
{
/*    std::vector<FiguraGeral> figs;
       std::ifstream ifile("C:Users/eu_bh/Desktop/PTeste/Sculptor3d/TesteP2.txt", std::ios::in);

       std::string part1;
       int nx, ny, nz;


       int x, y, z,
           x1, y1, z1,
           rd, rdx, rdy, rdz;
       float r, g, b, a;

       if (!ifile) {
           std::cerr << "Failed to open file. exiting...";
           std::exit(1);
       }

       ifile >> part1 >> nx >> ny >> nz;
       Sculptor S(nx, ny, nz);
       cout << "Sculpture size: " << nx << "x" << ny << "x" << nz << "\n\n";

       //reading the file while the end is not reached
       while (ifile >> part1) {

           if ("putvoxel" == part1) {

               ifile >> x >> y >> z
                   >> r >> g >> b >> a;

    new PutVoxel(x, y, z, r, g, b, a);
               figs.push_back (PutVoxel(x, y, z, r, g, b, a));
           }
           else if ("cutvoxel" == part1) {
               ifile >> x >> y >> z;

    new CutVoxel(x, y, z);
               figs.push_back(CutVoxel(x, y, z));
           }
           else if ("putbox" == part1) {
               ifile >> x >> x1
                   >> y >> y1
                   >> z >> z1
                   >> r >> g >> b >> a;

    new PutBox(x, y, z, x1, y1, z1, r, g, b, a);
               figs.push_back(PutBox(x, y, z, x1, y1, z1, r, g, b, a));
           }
           else if ("cutbox" == part1) {
               ifile >> x >> x1
                   >> y >> y1
                   >> z >> z1;

    new CutBox(x, y, z, x1, y1, z1);
               figs.push_back(CutBox(x, y, z, x1, y1, z1));

           }
           else if ("putsphere" == part1) {
               ifile >> x >> y >> z
                   >> rd
                   >> r >> g >> b >> a;

    new PutSphere(x, y, z, rd, r, g, b, a);
               figs.push_back(PutSphere(x, y, z, rd, r, g, b, a));
           }
           else if ("cutsphere" == part1) {
               ifile >> x >> y >> z
                   >> rd;

    new CutSphere(x, y, z, rd);
               figs.push_back(CutSphere(x, y, z, rd));
           }
           else if ("putellipsoid" == part1) {
               ifile >> x >> y >> z
                   >> rdx >> rdy >> rdz
                   >> r >> g >> b >> a;

    new PutEllipsoid(x, y, z, rdx, rdy, rdz, r, g, b, a);
               figs.push_back(PutEllipsoid(x, y, z, rdx, rdy, rdz, r, g, b, a));

//cout << part1 << " " << x << " " << y << " " << z << " " << rdx <<" "<<rdy<<" "<<rdz<<" "<< r << " " << g << " " << b << " " << a << "\n";
           }
           else if ("cutellipsoid" == part1) {
               ifile >> x >> y >> z
                   >> rdx >> rdy >> rdz;

    new CutEllipsoid(x, y, z, rdx, rdy, rdz);
               figs.push_back(CutEllipsoid(x, y, z, rdx, rdy, rdz));

               //cout << part1 << " " << x << " " << y << " " << z << " " << rdx << " " << rdy << " " << rdz << "\n";
           }
           else {
               std::cerr << "Invalid/corrupted file. exiting...\n";
               std::exit(1);
           }
       }



       S.writeOFF((char*)"C:/Users/eu_bh/Desktop/off.off");

*/
   }

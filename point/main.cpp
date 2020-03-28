#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include "point.hpp"


int main()
{


  std::cout << std::setfill ('*') << std::setw (80) <<  " " <<  std::endl;
  std::cout <<  "      " << "construction de la classe Point" << std::endl;
  std::cout << std::setfill ('*') << std::setw (80) <<  " " <<  std::endl;
  std::cout << std::endl;

  Point A, B, C;
  std::cout << "saisi du point A " << std::endl;
  A.lis();
  std::cout << std::endl;

  std::cout << "saisi du point B " << std::endl;
  B.lis();
  std::cout << std::endl;

  C = A.milieu(B);
  double d = A.distance(B);

  std::cout << "le milieu de AB " << std::endl;
  C.print();
  std::cout<< std::endl;

  std::cout << "la distance AB vaut : " << d << std::endl;


  std::cout << std::setfill ('*') << std::setw (81) <<  " " <<  std::endl;
  std::cout <<  "      " << "construction de la classe Cercle" << std::endl;
  std::cout << std::setfill ('*') << std::setw (81) <<  " " <<  std::endl;
  std::cout << std::endl;

  Cercle C1(1.5, A);
  Cercle C2(1.5, B);

  C1.get_rayon();
  C1.get_centre();

  std::cout << "la surface de C1 vaut : " << C1.surface() << std::endl;
  std::cout<< std::endl;
  std::cout << "le perimetre de C1 vaut : " << C1.perimetre() << std::endl;
  std::cout << std::endl;
  A = C1.move(1,1);
  std::cout << "Apres translation le centre vaut : " << std::endl;
  A.print();
  std::cout << std::endl;
  if(C1.egalite(C2)){
    std::cout << "les cercles sont egaux " << std::endl;
  }
  else
    std::cout << "les cercles ne sont pas egaux " << std::endl;

  std::cout << std::endl;
  Point p1(1, 0.5);
  if(C1.appartenance(p1)){
    std::cout << "le point appartient au cercle " << std::endl;
  }
  else
    std::cout << "le point n'appartient pas au cercle  " << std::endl;









  return 0;
}

#include <iostream>
#include <string>
#include <math.h>
#include "fraction.hpp"



int main()
{

  Fraction f1(1, 5);
  Fraction f2(1,5);
  Fraction f3,f4,f5;

  f3 = f1 + f2;
  f4 = f1*f2;
  f5 = f1-f2;

  std::cout << "addition" << std::endl;
  f3.affiche();
  std::cout << std::endl;
  std::cout << "soustraction" << std::endl;
  f5.affiche();
  std::cout << std::endl;
  std::cout << "multiplication" << std::endl;
  f4.affiche();
  std::cout << std::endl;
  std::cout << "comparaison" << std::endl;

  if(f1 == f2)
  { std::cout<<"les deux fractions sont égales" << std::endl;}
  else
      std::cout<<"les deux fractions ne sont pas égales" << std::endl;

  if(f1!=f2)
  { std::cout<<"les deux fractions ne sont pas égales" << std::endl;}









  return 0;
}

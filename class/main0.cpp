#include "fichier.hpp"
#include <iostream>
#include <string>

int main()
{
  Human h{};
  Human h1{"LY", 26};
  Human h2{h1};
  //h1.affiche();

  std::cout << h1.getName() << std::endl;
  std::cout << h1.getAge() << std::endl;
  h1.setName("Lamine");
  std::cout << h1.getName() << std::endl;


  return 0;
}

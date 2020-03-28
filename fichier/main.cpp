#include <iostream>
#include <string>
#include "file.hpp"
#include <memory>




int main()
{

  FFile f;

  if(f.creation(5))
  {
    f.remplissage();
    f.affiche();
    f.freeMemory();
  }

  return 0 ;
}

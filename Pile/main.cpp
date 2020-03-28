#include <iostream>
#include <string>
#include "Pile.hpp"




int main()
{

  Objet *pObjet;

  Pile *p = new Pile(10);
  if(!p->Pleine())
        p->Mets(pObjet);




  return 0;
}

#include <iostream>
#include <string>
#include "Pile.hpp"


/*------------------------------------------------------------*/
        // Boite Members
/*------------------------------------------------------------*/

Boite::Boite(int n)
{
  taille = n;
  T = new Objet* [taille];
  vide = 0;
  pleine = 1;
}


Boite::~Boite()
{
   delete [] T;
}

int Boite::Vide()
{
  return vide;
}

int Boite::Pleine()
{
  return pleine;
}

/*------------------------------------------------------------*/
        // Pile Members
/*------------------------------------------------------------*/
Pile::Pile(int n) : Boite(n)
{
  nbelements = 0;
}

void Pile::Mets(Objet *po)
{
   T[nbelements++] = po;
   vide = 0;
   pleine = nbelements == taille;
}

Objet *Pile::Extrait()
{
   Objet *temp;
   temp = T[--nbelements];
   pleine = 0;
   vide = nbelements == 0;
   return temp;
}

#include "rectangle.hpp"
#include <iostream>
#include <string>


Rectangle::Rectangle(int largeur = 1, int hauteur = 1)
{
  mLargeur = largeur;
  mHauteur = hauteur;
}
Rectangle::Rectangle()
{
   mLargeur = 1;
   mHauteur = 1;
}

Rectangle::~Rectangle(){}

int Rectangle::perimetre(int largeur, int hauteur)
{

    return (largeur + hauteur)*2;;
}

int Rectangle::surface(int largeur, int hauteur)
{
    return largeur*hauteur;
}

int Rectangle::getHauteur() const
{
  return mHauteur;
}
void Rectangle::setHauteur(const int hauteur)
{
  mHauteur = hauteur;
}


int Rectangle::getLargeur() const
{
  return mLargeur;
}
void Rectangle::setLargeur(const int largeur)
{
  mLargeur = largeur;
}

Carre::Carre(short cote): Rectangle(cote, cote)
{
}

void Rectangle::affiche()
{
   std::cout << mLargeur*mHauteur << std::endl;
}

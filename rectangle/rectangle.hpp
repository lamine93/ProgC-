#include <iostream>
#include <string>

#if !defined(__REC__)
#define __REC__


class Rectangle
{
  public:
      Rectangle(int largeur, int hauteur);
      Rectangle();
     ~Rectangle();

      int perimetre(int largeur, int hauteur);
      int surface(int largeur, int hauteur);
      void affiche();

      int getHauteur() const;
      void setHauteur(const int hauteur);

      int getLargeur() const;
      void setLargeur(const int largeur);




  private:
      int mHauteur;
      int mLargeur;
      int mPerimetre;
      int mSurface;

};

class Carre :  public Rectangle
{
    public:
          Carre(short cote);
};

#endif

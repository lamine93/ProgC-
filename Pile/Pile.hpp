#include <iostream>
#include <string>

#if !defined(__PILE__)
#define __PILE__

class Objet
{
          
};

class Boite
{
    public:
       Boite(int n);
      ~Boite();
      virtual void Mets(Objet *po) = 0;
      virtual Objet *Extrait() = 0;
      int Vide();
      int Pleine();
    protected:
      int vide, pleine;
      int taille;
      Objet **T;              // tableau de pointeurs sur Objet

};

class Pile : public Boite
{
   public:
        Pile(int n);
        void Mets (Objet *po);
        Objet *Extrait();
  protected:
        int nbelements;

};

class Queue : public Boite
{
    public:
      Queue(int n);
      void Mets(Objet *p);
      Objet *Extrait();
    protected:
      int tete,                 // indice ou se trouve l'élément le plus ancien
          queue;                // indice ou se trouve le prochain element
                                // T est utilisé comme un trableau circulaire

};

















#endif

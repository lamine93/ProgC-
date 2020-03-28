#include <iostream>
#include <string>
#include <math.h>




#if !defined(__MATVECTOR__)
#define __MATVECTOR__

class Matrice;

class Vector
{

    public:
      Vector();
      Vector(int s);
      virtual ~Vector();
      Vector(int s, double *tab);

      int get_Vsize() const;
      void set_Vsize(const int s);


      void affiche();
      void saisiVec();

      //Déclaration d'amitié pour la fonction indépendante
      friend Vector produit(Matrice, Vector);
      //Déclaration de la fonction membre

      Vector produit(Matrice &);

    private:
      int Vsize;
      double *V;


};

class Matrice
{

    public:
        Matrice();
        Matrice(int s);
        virtual ~Matrice();
        Matrice(int s, double *tab);

        void affiche();
        void saisiMat();

        int get_Msize() const;
        void set_Msize(const int s);

        friend Vector Vector::produit(Matrice &);
        friend Vector produit(Matrice, Vector);

    private:
        int Msize;
        double *M;

};






#endif

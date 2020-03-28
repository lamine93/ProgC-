#include <iostream>
#include <string>
#include <math.h>
#include "MatVector.hpp"




int main()

{

   int n=3;
   double *vec = new double[n];
   double *Mat = new double[n*n];



  /* std::cout << "Saisi du vecteur V: " << std::endl;
   for (int i = 0; i<n; i++)
   {
     std::cout << "Saisir l'element " << i << ":";
     std::cin >>vec[i] ;
   }


   std::cout << "Saisi de la matrice M: " << std::endl;
   for (int i = 0; i<n; i++)
   {
     for (int j = 0; j<n; j++)
     {
       std::cout << "Saisir l'element M[" << i << "][" << j << "]:";
       std::cin >> Mat[i*n + j] ;
     }
   }*/


   Vector V(n);
   Vector res;
   Matrice M(n);

   V.set_Vsize(n);
   V.get_Vsize();

   res.set_Vsize(n);
   res.get_Vsize();

   M.set_Msize(n);
   M.get_Msize();

   std::cout << "Saisi du vecteur v: " << std::endl;
   std::cout << std::endl;
   V.saisiVec();
   std::cout << std::endl;
   std::cout << "Le vecteur v est: " << std::endl;
   V.affiche();
   std::cout << std::endl;
   std::cout << "Saisi de la matrice M: " << std::endl;
   std::cout << std::endl;
   M.saisiMat();
   std::cout << std::endl;
   std::cout << "Le matrice M est: " << std::endl;
   M.affiche();
   std::cout << std::endl;
   res = V.produit(M);
   std::cout << std::endl;
   std::cout << "le resultat M*v est : " << std::endl;
   res.affiche();




   return 0;
}

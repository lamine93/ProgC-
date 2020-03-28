#include <iostream>
#include <string>
#include <math.h>
#include "MatVector.hpp"





/*-----------------------------------------------------------*/
             /* Vector members */
/*-----------------------------------------------------------*/

Vector::Vector(){}
Vector::Vector(int s)
{
    Vsize = s;
    V = new double[s];
    for (int i = 0; i<s; i++)
    {
      V[i] = 0;
    }

}


Vector::~Vector()
{}

int Vector::get_Vsize() const
{
  return Vsize;
}
void Vector::set_Vsize(const int s)
{
  Vsize = s;
}

void Vector::affiche()
{
  std::cout << "( " ;
  for (int i = 0; i<get_Vsize(); i++)
  {
    std::cout <<  V[i] << " ";
  }
  std::cout << ") " << std::endl;
}

void Vector::saisiVec()
{

  for (int i = 0; i<get_Vsize(); i++)
  {
    std::cout << "Saisir l'element " << i << ":";
    std::cin >> V[i] ;
  }

}

Vector Vector::produit(Matrice &m)
{
  Vector v(get_Vsize());

  for(int i=0;i < get_Vsize();i++){
       v.V[i]=0;
       for(int j=0;j < get_Vsize();j++){
          v.V[i] += m.M[i*get_Vsize() + j]*V[j];
       }
  }
  return v;

}


/*-----------------------------------------------------------*/
             /* Matrice members */
/*-----------------------------------------------------------*/
Matrice::Matrice(){}

Matrice::Matrice(int s)
{
  Msize = s;
  M = new double[s*s];
  for (int i = 0; i< s; i++)
  {
    for (int j = 0; j< s; j++)
    {
      M[i*s+j] = 0 ;
    }
  }

}
Matrice::Matrice(int s, double *tab)
{
  Msize = s;

  M = new double[s*s];
  for (int i = 0; i< s; i++)
  {
    for (int j = 0; j< s; j++)
    {
      M[i*s + j] = tab[i*s + j] ;
    }
  }

}
Matrice::~Matrice()
{
  delete [] M;
}

int Matrice::get_Msize() const
{
  return Msize;
}
void Matrice::set_Msize(const int s)
{
  Msize = s;
}

void Matrice::affiche()
{
  for (int i = 0; i<get_Msize(); i++)
  {
    for (int j = 0; j<get_Msize(); j++)
    {
      std::cout << M[i*get_Msize() + j] << " ";
    }
    std::cout << std::endl;

  }
}

void Matrice::saisiMat()
{
    for (int i = 0; i<get_Msize(); i++)
    {
      for (int j = 0; j<get_Msize(); j++)
      {
        std::cout << "Saisir l'element M[" << i << "][" << j << "]:";
        std::cin >> M[i*get_Msize() + j] ;
      }
    }
}

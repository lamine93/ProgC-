#include <iostream>
#include <string>
#include <math.h>
#include "entier.hpp"



ens_entier::ens_entier(){}

ens_entier::~ens_entier(){}

ens_entier::ens_entier(int t)
{
  taille = t;
  tab = new int[t];
  for (int i = 0; i<t; i++)
  {
    tab[i] = 0 ;
  }
}
ens_entier::ens_entier(const ens_entier &other)
{
  tab =  other.tab;
  taille = other.taille;
}

int ens_entier::get_size() const
{
  return taille;
}

void ens_entier::set_size(const int t)
{
  taille = t;
}

void ens_entier::remplir()
{
  for (int i = 0; i<get_size(); i++)
  {
    std::cin >> tab[i] ;
  }
}

void ens_entier::affiche()
{
  for (int i = 0; i<get_size(); i++)
  {
    std::cout << tab[i] << " " ;
  }

}

bool ens_entier::est_membre(int n)
{

  for (int i = 0; i<get_size(); i++)
  {
    if(tab[i] == n) return true;
  }

  return false;
}

void ens_entier::ajouter(int n)
{

   if (est_membre(n))
       std::cout << "Erreur : Element existe!" << std::endl;
   else{
      tab[taille] = n;
      taille++;
    }
 }

void ens_entier::supprimer(int n)
{
  if(!est_membre(n)) return;
  for (int i = 0; i<taille; i++)
  {
     if(tab[i] == n){
       for(int j=i; j<taille-1; j++){
                    tab[j] = tab[j+1];
                }
                taille--;
     }
  }
}

bool ens_entier::est_egal(ens_entier &e)
{

  for (int i = 0; i < taille; i++)
  {
     if(tab[i] != e.tab[i])  return false;
  }

  return true;
}

void ens_entier::vider()
{
  taille = 0;
}

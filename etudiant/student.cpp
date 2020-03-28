#include <iostream>
#include <string>
#include <math.h>
#include "student.hpp"


Etudiant::Etudiant()
{
  mNom = "Inconnu";
  mPrenom = "Inconnu";
  nombreNotes = 0;
  tabnotes = NULL;
}
Etudiant::Etudiant(std::string nom, std::string prenom)
{
  mNom = nom;
  mPrenom = prenom;
}

Etudiant::~Etudiant()
{
  delete[]tabnotes;
}

int Etudiant::get_nbnotes() const
{
  return nombreNotes;
}
void Etudiant::set_nbnotes(const int nbNotes)
{
  nombreNotes = nbNotes;
}

std::string  Etudiant::getNom() const
{
  return mNom;
}

std::string  Etudiant::getPrenom() const
{
  return mPrenom;
}

bool Etudiant::CreationTabNotes()
{

    tabnotes = new float(get_nbnotes());

    if (tabnotes == NULL) return false;

    return true;
}


void Etudiant::saisi()
{

  std::cout << "Saisir le nom de l'etudiant: " << std::endl;
  std::cin >> mNom;
  std::cout<<std::endl;

  std::cout << "Saisir le prenom de l'etudiant: " << std::endl;
  std::cin >> mPrenom;
  std::cout<< std::endl;


  for (int i = 0; i < get_nbnotes(); i++) {
      std::cout << "Saisir la note N°" << i << ":";
      std::cin >> tabnotes[i];
  }
}

void Etudiant::affichage()
{
  std::cout << std::endl;
  std::cout << getNom() << std::endl;

  std::cout << getPrenom() << std::endl;

  for (int i = 0; i < get_nbnotes(); i++) {
      std::cout <<  tabnotes[i] << std::endl;
  }
}

float Etudiant::moyenne()
{
  float sum = 0, moyenne;
  for (int i = 0;  i <get_nbnotes() ;  i++) {
         sum = sum + tabnotes[i];
  }
  moyenne = sum/get_nbnotes();
  return moyenne;
}

int Etudiant::admis(Etudiant E)
{
  if (E.moyenne()>=10) return (1); else return (0);
}

int Etudiant::exae_quo(Etudiant E)
{
  if (E.moyenne() == moyenne()) return (1); else return (0);
}

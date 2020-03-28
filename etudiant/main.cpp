#include <iostream>
#include <string>
#include <math.h>
#include "student.hpp"



int main()
{
  Etudiant E("Inconnu", "Inconnu");

  int nbNotes;
  std::cout << "Saisir le nombre de notes de l'etudiant" << std::endl;
  std::cin >> nbNotes;

  E.set_nbnotes(nbNotes);
  E.get_nbnotes();


  std::cout << "Saisi des informations de l' etudiant: Nom, Prenom, Notes: " << std::endl;
  if (E.CreationTabNotes()){ E.saisi();}
  E.affichage();
  std::cout << " la moyenne est: " <<  E.moyenne() << std::endl;

  std::cout <<  E.admis(E) << std::endl;
  std::cout <<  E.exae_quo(E) << std::endl;



  return 0;
}

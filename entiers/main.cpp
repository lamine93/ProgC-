#include <iostream>
#include <string>
#include <math.h>
#include "entier.hpp"




int main() {

    ens_entier E(4);

    //ens_entier E1;
    E.get_size();
    E.set_size(4);

    std::cout << "Remplir l'ensemble :" << std::endl;
    E.remplir();
    std::cout << std::endl;
    std::cout << "Affichage de l'ensemble :" << std::endl;
    E.affiche();
    std::cout << std::endl;
    std::cout << "Ajouter un element :" << std::endl;
    E.ajouter(5);
    E.affiche();
    std::cout << std::endl;
    std::cout << "copie :" << std::endl;
    ens_entier E1{E};
    std::cout << "affiche du copie :" << std::endl;
    E1.affiche();
    std::cout << std::endl;
    E.affiche();
    std::cout << std::endl;
    E.supprimer(3);
    std::cout << "affiche apres supression :" << std::endl;
    E.affiche();
    std::cout << std::endl;
    if(E.est_egal(E1))
      std::cout <<"les tableaux sont egaux" << std::endl ;
    else
      std::cout <<"les tableaux sont egaux" << std::endl ;

  return 0;
}

#include "rectangle.hpp"
#include <iostream>
#include <string>

int main()
{
    int Largeur, Hauteur;
    Rectangle r{};

    std::cout << "Donner la largeur du rectangle" << std::endl;
    std::cin >> Largeur;
    r.setLargeur(Largeur);


    std::cout << "Donner la hauteur du rectangle" << std::endl;
    std::cin >> Hauteur;
    r.setHauteur(Hauteur);


    std::cout << "Largeur = " << r.getLargeur() << std::endl;
    std::cout << "Hauteur = " << r.getHauteur() << std::endl;

    std::cout << "Perimetre = " << r.perimetre(r.getLargeur(), r.getHauteur()) << std::endl;
    std::cout << "Surface du Rectangle   = " << r.surface(r.getLargeur(), r.getHauteur()) << std::endl;

    Carre *monCarre;
    monCarre = new Carre(10);

    //std::cout << monCarre->surface(monCarre->getLargeur(), monCarre->getHauteur()) << std::endl;
    std::cout << "Surface du Carre = " ; monCarre->affiche();



}

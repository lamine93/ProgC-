#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
#include "jeu.hpp"

/*----------------------------------------------------------------------------*/
     /* Acteur Members
/*----------------------------------------------------------------------------*/


void Acteur::AfficheNom()
{
  std::cout << nom << std::endl;
}



/*----------------------------------------------------------------------------*/
     /* Meneur Members
/*----------------------------------------------------------------------------*/
/*{
  srand((unsigned) time(NULL));
  numsecret = 1 + rand()%100;
  std::cout << numsecret << '\n';
}*/
/*Meneur::Meneur(){}
Meneur::~Meneur(){}*/
int Meneur::reponds(int p)
{
}

MeneurHumain::MeneurHumain()
{
  std::cout << " Vous etes le meneur. Quel est votre nom ? " << std::endl;
  std::cin >> nom;
  std::cout << "Choisissez un numéro secret entre 1 et 100 " << std::endl;

}
//MeneurHumain::~MeneurHumain(){}

int MeneurHumain::reponds(int p)
{
  AfficheNom();
  std::cout << ", indiquez votre reponse :";
  int r;
  std::cout << "\n0 - C’est exact";
  std::cout << "\n1 - C’est plus";
  std::cout << "\n2 - C’est moins";
  std::cout << "\nVotre choix (0, 1 ou 2) ?  ";
  std::cin >> r;
  return r;
}
MeneurOrdinateur::MeneurOrdinateur()
{
  strcpy(nom, "l'ordinateur");
  srand((unsigned) time(NULL));
  numsecret = 1 + rand()%100;
}
//MeneurOrdinateur::~MeneurOrdinateur(){}


int MeneurOrdinateur::reponds(int p)
{
   std::cout << "Réponse de " ;
   AfficheNom();

  if(p < numsecret){
     std::cout << "\nC'est plus " << std::endl ;
        return 1;
   }
   else if (p > numsecret){
        std::cout << "\nC'est moins " << std::endl ;
        return 2;
    }
    else{
        std::cout << "\nC'est exact " << std::endl ;
        return 0;
    }
}
/*----------------------------------------------------------------------------*/
     /* Joueur Members
/*----------------------------------------------------------------------------*/
//Joueur::Joueur(){}
//Joueur::~Joueur(){}


int Joueur::propose(int p)
{
}

JoueurHumain::JoueurHumain()
{
  std::cout << "Vous etes le joueur. Quel est votre nom ?" << std::endl;
  std::cin >> nom;
}
//JoueurHumain::~JoueurHumain(){}

int JoueurHumain::propose(int d)
{
   AfficheNom();
   int p;
   std::cout << " votre proposition?  " << std::endl;
   std::cin >> p ;
   return p;
}



JoueurOrdinateur::JoueurOrdinateur()
{
  strcpy(nom, "l'ordinateur");
  min = 1;
  max = 100;
  proposition = 0;
}
//JoueurOrdinateur::~JoueurOrdinateur(){}


int JoueurOrdinateur::propose(int d)
{



    if (d == 1)
       min = proposition + 1;
    else
       max = proposition - 1;
    proposition = (min + max)/2;
    AfficheNom();
    std::cout << "propose " << proposition << std::endl;
    return proposition;
}
   /*if(d == 1){
       min = proposition+1;
       std::cout << "Le bon choix est entre " << min << " et " << max << std::endl;
       std::cout << "Proposer un nombre : " << std::endl;
       std::cin >> proposition;
       return proposition;
   }
   else {
        max = proposition-1;
        std::cout << "Le bon choix est entre " << min << " et " << max << std::endl;
        std::cout << "Proposer un nombre : " << std::endl;
        std::cin >> proposition;

        return proposition;*/

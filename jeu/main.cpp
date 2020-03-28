#include <iostream>
#include <string>
#include "jeu.hpp"
#include <stdlib.h>




int main()
{

  Joueur *j;
  Meneur *m;

  char rep;
  std::cout << "Qui est le meneur (h = humain , o = ordinateur)" << std::endl;
  std::cin >> rep;

  if(rep == 'h')
      m = new MeneurHumain;
  else
      m = new MeneurOrdinateur;

  std::cout << "Qui est le joueur (h = humain , o = ordinateur)" << std::endl;
  std::cin >> rep;

  if(rep == 'h')
      j = new JoueurHumain;
  else
     j = new JoueurOrdinateur;

  int p, d = 1, cpt = 0;

  do{
      p = j->propose(d);
      d = m->reponds(p);
      cpt++;
  } while(d && cpt < 6);
  std::cout << "Le vainqueur est :" << '\n';
  if(d)
      m->AfficheNom();
  else
      j->AfficheNom();


  delete j;
  delete m;


  /*int p, d = 1, cpt = 0;

  do {
    p = J.propose(d);
    d = M.reponds(p);
    cpt++;
  } while(d && cpt < 6);

  if(d)
    std::cout << " Le joueur a perdu !" << std::endl;
  else
    std::cout << " Le joueur a gagné !" << std::endl;*/


  return 0;
}

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>



void minusculesVersMajuscules(char chaine[]){

     int compteur = 0;

     while (chaine[compteur] != '\0') {

       if(chaine[compteur] >= 'a' && chaine[compteur] <= 'z') {
			   chaine[compteur] = chaine[compteur] + ('A'-'a');
	       compteur++;
       }
     }
}

int main() {

  std::string chaine;
  std::string S;

  std::cout << "Tapez une phrase! " ;
  std::getline(std::cin, chaine);

  std::cout << "votre phrase est :" <<  chaine << std::endl;

  int taille = chaine.size();

  std::cout << "La chaine comporte " << taille << " caracteres." << std::endl;

  int compteur=0;
  char mot[0];
  //std::string mot;
  for (int i = 0; i < taille; i++) {

      if(chaine.at(i) == ' ') {
        for (int j = 0; j <= i-1; j++) {
            mot[j] = chaine.at(j);

        }
      }

  }

  std::cout << mot << std::endl;

  /*std::stringstream T(chaine);
  while (getline(T, S, ' ')) {
        std::cout << S << std::endl;

  }*/




  return 0;
}

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>




int main() {

  int taille{5};
  int *tab1{new int[taille]};
  int *tab2{new int[taille]};
  int *tab3{new int[2*taille]};


  std::cout << "Saisir les " <<  taille << " valeurs du tableau 1" <<  std::endl;
  for (int i = 0; i < taille; i++) {
    std::cin >> tab1[i];
  }

  std::cout << "Saisir les " <<  taille << " valeurs du tableau 2" <<  std::endl;
  for (int i = 0; i < taille; i++) {
    std::cin >> tab2[i];
  }
  int j = taille;
  for (int i = 0; i < taille; i++) {
      tab3[i] = tab1[i];
      tab3[j] = tab2[i];
      j++;
  }
  std::cout << "tableau 3" << '\n';
  for (int i = 0; i < 2*taille; i++) { std::cout << tab3[i] << std::endl;}




  delete tab1;
  delete tab2;
  delete tab3;


  return 0;
}

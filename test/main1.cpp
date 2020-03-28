#include <iostream>
#include <iomanip>
#include <limits>
#include <string>





int main() {


  int taille{5};
  int *tab{new int[taille]};

  std::cout << "Saisir les " <<  taille << " valeurs du tableau " <<  std::endl;
  for (int i = 0; i < taille; i++) {
    std::cin >> tab[i];
  }
  int min, imin, tmp, j;
  for (int i = 0; i < taille - 1; i++) {
     imin=i;min=tab[i];
     for(j=i+1;j<taille;j++)if(tab[j]<min){min=tab[j];imin=j;}
     tmp=tab[imin];tab[imin]=tab[i];tab[i]=tmp;
  }
  std::cout << "tableau trier" << '\n';
  for (int i = 0; i < taille; i++) { std::cout << tab[i] << std::endl;}

  delete tab;
  return 0;
}

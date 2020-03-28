#include <iostream>
#include <iomanip>
#include <limits>
#include <string>


bool numberpremier(int n)
{
  bool r = true;
  int compteur=0;
  for (int i = 2; i <n ; i++) {
    if (n%i == 0) {compteur++;}
  }
  if(compteur>0){ r = false;}  //std::cout << n << " n' est pas premier  " << std::endl;}
  //else {std::cout << n << "  est premier  " << std::endl;}
  return r;
}

int Npremier(int N)
{
  int i=2;
  int nb=0;

  while (nb!=N) {
    if(numberpremier(i)) {nb++;}
    i++;
  }
  return i-1;
}

int main(){

  int n = 115;
  std::cout << "Donnez un entier" << std::endl;
  std::cin >> n;
  //numberpremier(n);
  int p = Npremier(n);
  std::cout << "Le " << n << " iem nombre premier est: " << std::endl;
  std::cout <<  p << std::endl;
  return 0;

}

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

template<typename T>

T sum( T a , T b)
{
  return a+b;
}

#define size_tab 100
int main() {

 int number{0};

 std::string name{};

 auto nb1{4};
 auto nb2{6};

 int nbr =16;
 int *Numberptr{nullptr};

 Numberptr = &nbr;



 //--------------------------------------------------------

 //--------------------------------------------------------
 /*std::cout << "Tapez  un nombre ! " ;
 std::cin >> number;

 if ( number >= 56 & number <= 78) {
   std::cout << " You win: congratulation !! "<< std::endl;
 }
 else{
   std::cout << " You lose : sorry !! " << std::endl;
 }*/

 //--------------------------------------------------------

 //--------------------------------------------------------
/*
 int U0{1};
 int U1{1};

 int n;
 int Unn;

 std::cout << "Donner  un entier ! " <<  std::endl;
 std::cin >> n;


 for (int i = 0; i < n; i++) {
     Unn = U0 + U1;
     U1  = Unn;
     U0  = U1;
 }
 std::cout << "Un+1 = " << Unn << std::endl;

 */
/*  int x{0};
  int choix;


  do {

    std::cout << x << std::endl;
    std::cout << "1. Ajouter 1" << std::endl;
    std::cout << "2. Multiplier par 2"<< std::endl;
    std::cout << "3. Soustraire 4" << std::endl;
    std::cout << "Quitter" << std::endl;

    std::cout << "Donnez un choix !!" << std::endl;
    std::cin >> choix ;

    switch(choix)
    {
      case 1 : x = x+1;   break;
      case 2 : x = x*2;   break;
      case 3 : x = x-4;   break;
    }
    std::cout << x << std::endl;

  } while(choix!=4);
*/
/*int N;
std::cout << "Tapez un nombre " << std::endl;
std::cin >> N;
int i = 0;
do{
  std::cout << std::setfill('*') << std::setw(i)<<" "<< std::endl;
  i++;
} while(i<=N+1);*/
 int taille;
 int valeur;

 std::cout << "Donnez la taille du tableau" <<  std::endl;
 std::cin >> taille ;

 int *tab{new int[taille]};

 std::cout << "Saisir les " <<  taille << " valeurs du tableau " <<  std::endl;
 for (int i = 0; i < taille; i++) {
   std::cin >> tab[i];
 }

 std::cout << "Saisir la valeur à chercher dans le tableau " << std::endl;
 std::cin >> valeur;

 bool find = false;
 int cpt = 0;

 int i =0;
 int j;
 while(!find && i<taille)
	if(tab[i]==valeur) find=true; else i++;

 if(find)
 {
	for(j=i;j<taille-1;j++) tab[j]=t[j+1];
	 tab[taille-1]=0;
 }
 for (int i = 0; i < taille; i++) { std::cout << tab[i] << std::endl;}



 //std::cout<< *Numberptr << std::endl;
 //std::cout<< sum(nb1, nb2) << std::endl;

 //std::cout << std::numeric_limits<int>::max() << std::endl;

 //std::cout << "Tapez votre nom ! " ;
 //std::cin >> number;
 //std::getline(std::cin, name);
 //std::cout << "votre nom est " << name << std::endl;


 return 0;
}

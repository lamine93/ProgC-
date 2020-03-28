#include <iostream>
#include <iomanip>
#include <limits>
#include <string>


struct personne {
  std::string  prenom;
  std::string  nom;
  int age;

};

int main(){

  personne p{"Mouhamadou", "Ly", 27};
  personne pp{p};

  std::cout << "Tu t'appelle: " << p.prenom << " " << p.nom << std::endl;
  std::cout << "votre age est " << p.age << " ans" << std::endl;
  std::cout << "Tu t'appelle: " << pp.prenom << " " << pp.nom << std::endl;




  return 0;
}

#include <iostream>
#include <fstream>
#include <string>



const short MAX = 40;

class Plat
{
 public:
   void Setnom(std::string name);
   std::string Getnom();
   void  Setprix( float montant);
   float Getprix();

 private:
   float prix;
   std::string  nom;
};

class A
{
  ///A();
  friend std::ostream &operator <<(std::ostream &os, A &monObj);

  private :
    int T[10];

};
/*A::A()
{
  for(int i = 0; i< 10; i++)
  {
    T[i] = i;
  }
}*/
std::ostream &operator <<(std::ostream &os, A &monObj)
{
  for(int i = 0; i< 10; i++)
  {
    os << monObj.T[i];
  }
  return os;
}


void Plat::Setnom(std::string name)
{
   name = nom;
}
std::string Plat::Getnom()
{
   return nom;
}
void Plat::Setprix(float montant)
 {
    prix = montant;
 }
 float Plat::Getprix()
 {
   return prix;
 }

 std::istream &operator>>(std::istream &is, Plat &article)
 {
   float montant;
   char chaine[MAX];
   is.getline(chaine, MAX);
   article.Setnom(chaine);
   is >> montant;
   article.Setprix(montant);
   is.ignore(1, '\n');
   return is;
 }

 std::ostream  &operator<<(std::ostream &os, Plat &article)
 {
    os << article.Getnom() << " (F " << article.Getprix() << ")";
    return os;
 }

 int main()
 {
    std::ifstream menu("MENU.txt");
    Plat article;
    article.Setnom("Pain");
    article.Getnom();
    article.Setprix(1.5);
    article.Getprix();
    if(menu >> article) {
        std::cout << article << '\n';
    }
    menu.close();

    return 0;

 }

#include <iostream>
#include <string>




class Forme
{
 public:
   virtual void QuisuisJe();
};

void Forme::QuisuisJe()
{
  std::cout << "Je ne sais de quel type je suis !" << '\n';
}

class Rectangle :  public Forme
{
  public:
    void QuisuisJe();
};

void Rectangle::QuisuisJe()
{
  std::cout << "Je suis un Rectangle!" << '\n';
}

class Cercle :  public Forme
{
   public:
     void QuisuisJe();
};

void Cercle::QuisuisJe()
{
  std::cout << "Je suis un Cercle!" << '\n';
}

class Carre :  public Forme
{
   public:
     void QuisuisJe();
};

void Carre::QuisuisJe()
{
  std::cout << "Je suis un Carre!" << '\n';
}



int main()
{
  Forme *s;
  int r;

  std::cout << "Vous voulez créer 1 : un rectangle" << '\n';
  std::cout << "Vous voulez créer 2 : un carre" << '\n';
  std::cout << "Vous voulez créer 3 : un cercle" << '\n';
  std::cout << "Vous voulez créer 4 : une forme quelconque" << '\n';

  std::cin >> r;
  switch (r) {
    case 1 : s = new Rectangle; break;
    case 2 : s = new Carre; break;
    case 3 : s = new Cercle; break;
    case 4 : s = new Forme; break;
  }
  s->QuisuisJe();


   return 0;
}

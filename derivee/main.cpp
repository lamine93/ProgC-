#include <iostream>


class Base
{
  public:
        void SetmembreBase(short valeurBase);
  protected:
        short membreBase;
};

void Base::SetmembreBase(short valeurBase)
{
  membreBase = valeurBase;
}

class Derivee: public Base
{
  public:
        void  SetmembreDerivee(short valeurDerivee);
        void  AfficheDonneesMembres(void);
  private:
        short membreDerivee;
};

void Derivee::SetmembreDerivee(short valeurDerivee)
{
  membreDerivee = valeurDerivee;
}

void Derivee::AfficheDonneesMembres()
{
  std::cout << "Le membre de Base a la valeur " << membreBase << std::endl;
  std::cout << "Le membre de Derivee a la valeur " << membreDerivee << std::endl;
}



int main()
{
   Derivee *ptrDerivee;
   ptrDerivee = new Derivee;

   ptrDerivee -> SetmembreBase(10);
   ptrDerivee -> SetmembreDerivee(20);
   ptrDerivee -> AfficheDonneesMembres();

   delete ptrDerivee;

   return 0;
}

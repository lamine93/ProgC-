#include <iostream>
#include <string>



template <class T > //  signale que T est un type param`etre de ce qui suit

class Tableau
{
public:

     Tableau(short dim);
    ~Tableau();
     T &operator[](short index);
private:
    short taille;
    T *ptab;
};

template < class T >
Tableau<T>::Tableau(short dim)
{
   taille = dim;
   ptab = new T [taille];
};

template < class T >
Tableau<T>::~Tableau()
{
  delete [] ptab;
};

template < class T >
T &Tableau<T>::operator[](short index)
{
    if(index < 0 || index > taille)
    {
       std::cout << "index hors de rang" << '\n';
       exit(1);
    }
    return ptab[index];
};


int main()
{
  /*Tableau<int> t(10);
  int z ;
  z = t[1];
  t[0] = 1;*/

  typedef char Mot[20];
  Tableau<Mot> t(100); // declare un tableau t contenant 100 mots

  return 0;

}

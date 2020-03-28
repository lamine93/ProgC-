#include <iostream>
#include <string>


#if !defined(__FRACTION__)
#define __FRACTION__


class Fraction
{
  public:
      Fraction();
     ~Fraction();
      Fraction(int denom, int num);

      int get_denom() const;
      int get_num() const;
      void set_denom(const int denom) ;
      void set_num(const int num);
      void affiche();

      /* Surcharge opearator */
      Fraction operator+(Fraction F);
      Fraction operator-(Fraction F);
      Fraction operator*(Fraction F);
      bool operator!=(Fraction F);
      bool operator==(Fraction F);

  private:
      int denominateur;
      int numerateur;

};


#endif

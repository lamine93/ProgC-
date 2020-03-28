#include <iostream>
#include <string>
#include <math.h>
#include "fraction.hpp"



Fraction::Fraction()
{
  denominateur = 1,
  numerateur   = 0;
}

Fraction::~Fraction(){}

Fraction::Fraction(int num, int denom)
{
  denominateur = denom;
  numerateur   = num;
}

int Fraction::get_denom() const
{
  return denominateur;
}
int Fraction::get_num() const
{
  return numerateur;
}
void Fraction::set_denom(const int denom)
{
  denominateur = denom;
}
void Fraction::set_num(const int num)
{
  numerateur = num;
}
void Fraction::affiche()
{
  std::cout << " Le numerateur est: " << get_num() << std::endl;
  std::cout << " Le denomibateur est: " << get_denom() << std::endl;
}
Fraction Fraction::operator+(Fraction F)
{
  Fraction f1;
  f1.numerateur = get_num()*F.get_denom() +  get_denom()*F.get_num();
  f1.denominateur = get_denom()*F.get_denom();

  return f1;
}
Fraction Fraction::operator-(Fraction F)
{
  Fraction f1;
  f1.numerateur = get_num()*F.get_denom() -  get_denom()*F.get_num();
  f1.denominateur = get_denom()*F.get_denom();

  return f1;
}

Fraction Fraction::operator*(Fraction F)
{
  Fraction f1;
  f1.numerateur = get_num()*F.get_num();
  f1.denominateur = get_denom()*F.get_denom();

  return f1;
}
bool Fraction::operator!=(Fraction F)
{
  if((get_num() != F.get_num()) || (get_denom() != F.get_denom())) { return true ;}
}
bool Fraction::operator==(Fraction F)
{
  if((get_num() == F.get_num()) & (get_denom() == F.get_denom())) { return true; }
  else return false;
}

#include "fichier.hpp"
#include <iostream>
#include <string>


Human::Human(std::string name = "inconnu", int age = 1)
{
  mName = name;
  mAge  = age;
}

Human::Human()
{
  mName = "Inconnu";
  mAge  =  1;
  std::cout << "Constructeur de la classe Human " << this << std::endl;
}

Human::Human(const Human &other)
{
  mName = other.mName;
  mAge  = other.mAge;
}

Human::~Human()
{
  std::cout << "Destructeur de la classe Human " <<  this <<std::endl;
}

void Human::affiche()
{
  std::cout << "Hello! " << std::endl;
}
std::string  Human::getName() const
{
  return mName;
}
int Human::getAge() const
{
  return mAge;
}
void Human::setName(const std::string name)
{
  mName = name;
}

#include <iostream>
#include <string>

#if !defined(__HUMAN__)
#define __HUMAN__


class Human
{
  public:
      Human(std::string name, int age);
      Human();
      Human(const Human &other);
     ~Human();

      std::string getName() const;
      void setName(const std::string name);
      int  getAge() const;

      void affiche();


  private:
      std::string mName;
      int mAge;


};

#endif

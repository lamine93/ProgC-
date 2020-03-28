#include <iostream>
#include <string>
#include <memory>



#if !defined(__FFILE__)
#define __FFILE__


class FFile
{
  public:
         FFile();
        ~FFile();

         bool creation(unsigned int);
         void remplissage();
         void affiche();
         void freeMemory();

  private:
    int mTaille;
    char* mPtr;


};

#endif

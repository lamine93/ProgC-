#include <iostream>
#include <string>
#include <memory>
#include "file.hpp"


FFile::FFile()
{
  mPtr = NULL;
  mTaille = 0;
}

FFile::~FFile(){}

bool FFile::creation(unsigned int s)
{

    mPtr = new char(mTaille);

    if (mPtr == NULL) return false;

    mTaille = s;

    return true;
}

void FFile::remplissage()
{
   for (int i = 0; i < mTaille  ; i++) {
      mPtr[i] = 'a';
   }
}

void FFile::affiche()
{
  //std::cout << "La zone memoire ointee par le pointeur mPtr est" << &mPtr << std::endl;
  for (int i = 0; i < mTaille  ; i++) {
    std::cout <<  mPtr[i] << std::endl;
  }
}

void FFile::freeMemory()
{
  delete mPtr;
}

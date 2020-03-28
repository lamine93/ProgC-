#include <iostream>
#include <string>
#include "pile.hpp"


int main() {

   Pile pile;

   Pile::Liste* myList = pile.initialisation();

   pile.push(myList, 4);
   pile.push(myList, 8);
   pile.push(myList, 15);
   pile.pop(myList);

   pile.afficheListe(myList);


   return 0;
}

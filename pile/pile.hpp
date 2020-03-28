#include <iostream>
#include <string>

#if !defined(__PILE__)
#define __PILE__


class Pile
{
  public:

      //structure
      struct Node {Node* next; int value;};
      struct Liste { Node *head; };

      //constructor | deconstructor
      Pile();
     ~Pile();

      int pop(struct Liste*);
      void push(struct Liste*, int);
      struct Liste* initialisation(void);
      void afficheListe(struct Liste*);



};

#endif

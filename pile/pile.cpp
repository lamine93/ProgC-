#include <iostream>
#include <string>
#include <cstdlib>
#include "pile.hpp"



//struct node* head = 0;

//constructor
Pile::Pile(){}
//destructor
Pile::~Pile(){}

Pile::Liste* Pile::initialisation()
{

    Pile::Liste* liste = (Pile::Liste*)malloc(sizeof(*liste));
    Pile::Node*  node  = (Pile::Node*)malloc(sizeof(*node));

    if (liste == NULL || node == NULL)
    {
        exit(EXIT_FAILURE);
    }

    node->value = 0;
    node->next = NULL;
    liste->head = node;

    return liste;
}


void Pile::push(Pile::Liste *liste, int newValue)
{
   /* create a new node */
   Pile::Node *newNode  = (Pile::Node*)malloc(sizeof(*newNode));

   if (liste == NULL || newNode == NULL)
   {
       exit(EXIT_FAILURE);
   }
   newNode->value = newValue;

   /* put the node at list starting*/

   newNode->next = liste->head;
   liste->head = newNode;
}

int Pile::pop(Pile::Liste *liste)
{
  //struct node* node = head;
  if(liste)
  {
    Pile::Node *toRemove = liste->head;
    liste->head = liste->head->next;
    free(toRemove);
  }
  else
     return -1;
}
void Pile::afficheListe(Pile::Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Pile::Node *actual = liste->head;

    while (actual != NULL)
    {
        printf("%d -> ", actual->value);
        actual = actual->next;
    }
    printf("NULL\n");
}

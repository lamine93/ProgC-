#include <iostream>
#include <string>


#if !defined(__JEU__)
#define __JEU__

class Acteur
{
  public:
        void AfficheNom();
  protected:
        char nom[20];
};

class  Meneur : public Acteur

{
  public:
       //Meneur();
      //~Meneur();
      virtual int reponds(int p); // proposition du joueur


};

class MeneurHumain : public Meneur
{
  public:
     MeneurHumain();
    //~MeneurHumain();
     int reponds(int p);

};

class MeneurOrdinateur : public Meneur
{
  public:
    MeneurOrdinateur();
   //~MeneurOrdinateur();
    int reponds(int p);

  private:
    int numsecret;

};




class Joueur : public Acteur
{

  public:
         //Joueur();
        //~Joueur();
        virtual int propose(int d); // le joueur propose


};

class JoueurHumain : public Joueur
{
    public:
        //~JoueurHumain();
        JoueurHumain();
        int propose(int d);
};

class JoueurOrdinateur : public Joueur
{
     public:
          JoueurOrdinateur();
         //~JoueurOrdinateur();
         int propose(int d);

     private:
          int proposition;
          int min;
          int max;

};



#endif

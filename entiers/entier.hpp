#include <iostream>
#include <string>
#include <math.h>



#if !defined(__ENTIER__)
#define __ENTIER__


class ens_entier
{
    public:
        ens_entier();
       ~ens_entier();
        ens_entier(int);

        int get_size()const;
        void set_size(const int);

        void remplir();
        void affiche();
        bool est_membre(int);
        void ajouter(int);
        void supprimer(int);
        ens_entier(const ens_entier &other); //copie
        bool est_egal(ens_entier &);
        void vider();

    private:
        int *tab;
        int taille;
};


#endif

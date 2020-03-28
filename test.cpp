#include<iostream>

using namespace std;

class matrice;

class vecteur{
    int v[3];
    public:
        vecteur(int *tab)
        {
            for(int i=0;i<3;i++)
            v[i] = tab[i];
        }
        vecteur()
        {
			for(int i=0;i<3;i++)
            v[i] = 0;
        }
        void affiche()
        {
            cout<<"("<<v[0]<<","<<v[1]<<","<<v[2]<<")"<<endl;
        }

        //Décalartion d'amitié pour la fonction indépendante
        friend vecteur produit(matrice,vecteur);

        //Déclaration de la fonction membre
        vecteur produit(matrice);
};

class matrice{
    int m[3][3];
    public:
    	matrice(int tab[][3])
        {
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    m[i][j] = tab[i][j];
        }
        matrice()
        {
			for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    m[i][j] = 0;
        }
        void affiche()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    cout<<m[i][j]<<" ";
                cout<<endl;
            }
        }

        //Décalartion d'amitié pour la fonction indépendante
        friend vecteur produit(matrice,vecteur);

        //Décalartion d'amitié pour la fonction membre à la classe vecteur
        friend vecteur vecteur::produit(matrice);


};

//Définition de la fonction indépendante
vecteur produit(matrice M, vecteur V)
{
    vecteur r;
    for(int i=0;i<3;i++)
    {
        r.v[i]=0;
        for(int j=0;j<3;j++){
            r.v[i] += M.m[i][j] * V.v[j];
        }
    }
    return r;
}

//Définition de la fonction membre à la classe Vecteur
vecteur vecteur::produit(matrice M)
{
    vecteur r;
    for(int i=0;i<3;i++)
    {
        r.v[i]=0;
        for(int j=0;j<3;j++){
            r.v[i]+=M.m[i][j]*v[j];
        }
    }
    return r;
    //return produit(M,*this);
}

int main()
{
    int A[3]={1,2,3},B[3][3]={{4,2,1},{8,7,0},{3,5,6}};
    vecteur V(A);
    matrice M(B);

    cout << "Affichage du vecteur V: " << endl;
    V.affiche();
    cout << endl << "Affichage de la matrice M: " << endl;
    M.affiche();
    vecteur res;
    cout << endl << "Appel avec la fonction independante: " << endl;
    res=produit(M,V);
    cout << "Le vecteur produit M*V: " << endl;
    res.affiche();

    cout << endl << "Appel avec la fonction membre: " << endl;
    res=V.produit(M);
    cout << "Le vecteur produit M*V: " << endl;
    res.affiche();

	return 0;
}
//Source : www.exelib.net

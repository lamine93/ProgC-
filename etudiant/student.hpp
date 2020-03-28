#include <iostream>
#include <string>


#if !defined(__ETUDIANT__)
#define __ETUDIANT__


class Etudiant
{
  public:
      Etudiant();
     ~Etudiant();
      Etudiant(std::string, std::string);

     void saisi();
     void affiche();
     float moyenne();
     int admis(Etudiant E);
     int exae_quo(Etudiant E);
     void affichage();
     bool CreationTabNotes();

     int get_nbnotes() const;
     void set_nbnotes(const int nbNotes);

     std::string  getNom() const;
     std::string  getPrenom() const;






  private:
    std::string mNom;
    std::string mPrenom;
    int nombreNotes;
    float *tabnotes;


};
class Etudiant_en_Maitrise : public Etudiant

{
  private:

            float note_memoire ;

  public :

            void saisie () ;

            void affichage () ;

            int admis() ;

            int exae_quo (Etudiant_en_Maitrise E) ;

};

#endif

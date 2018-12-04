#include "annexe.h"
#include "dates.h"
#include <iostream>  // cout, cin
#include <limits>    //numeric_limits


using namespace std;

void presentationProgramme() {
   cout << "Ce programme calcule le nombres de jours separant deux dates saisies par l'utilisateur" << endl;
}

void affichageResultat(const int DATE1[], const int DATE2[]) {
   cout << differenceDate(DATE1, DATE2) << " jours separe le ";
   afficherDate(DATE1);
   cout << " du ";
   afficherDate(DATE2);
   cout << endl;

}

bool recommencer(const char& oui, const char& non) {
   char reponse;

   // Boucle pour refaire la saisie en cas d'erreur
   do {
      cout << "Souhaitez-vous recommencer [" << oui << '/' << non << " ] ? ";
      cin  >> reponse;

   } while(reponse != oui or reponse != non);

   return reponse == oui;
}

void quitterProgramme() {
   cout << endl << "Presser ENTER pour quitter programme ... ";
   cin.ignore(numeric_limits<int>::max(),'\n');
}
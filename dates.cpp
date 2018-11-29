#include "dates.h"
#include <iostream>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

bool saisieDate(int& jours, int& mois, int& annee, const char& CAR){

   bool erreur;

   do{
      erreur = false;

      cout << endl << "Saisie Date : ";
      cin >> jours;
      cin.ignore(numeric_limits<streamsize>::max(),CAR);

      cin >> mois;
      cin.ignore(numeric_limits<streamsize>::max(),CAR);

      cin >> annee;
      cin.ignore(numeric_limits<streamsize>::max(),'\n');


      if(cin.fail()){
         erreur = cin.fail();
         cin.clear();
      }
   }while(!erreur);



}

bool validationDate(const int DATE[3]){
   const int MOIS_MIN = 1,
             MOIS_MAX = 12,
             JOUR_MIN = 1;

   return !(DATE[1] < MOIS_MIN or DATE[1] > MOIS_MAX or DATE[0] < JOUR_MIN or DATE[0] > nbJoursMax(DATE[1], DATE[2]));
}

int nbJoursMax(const int& MOIS, const int& ANNEE){
   const int NB_JOURS_FEVRIER_BISSEXTILE        = 29,
             NB_JOURS_FEVRIER_NON_BISSEXTILE    = 28,
             NB_JOURS_MAX                       = 31,
             FEVRIER                            = 2;

   if(MOIS == FEVRIER) {
      //Si l'année est bissextile
      if(estBissextile(ANNEE)){
         //Février compte 29 jours
         return NB_JOURS_FEVRIER_BISSEXTILE;
      } else{
         //Sinon il compte 28 jours
         return NB_JOURS_FEVRIER_NON_BISSEXTILE;
      }
   } else{
      //Soustrait 1 ou 0 à 31 en fonction du mois et l'affecte à nbJours
      //nbJours vaut soit 30 soit 31
      return NB_JOURS_MAX - (MOIS - 1)% 7 % 2;
   }


}

bool estBissextile(const int& ANNEE){
   return ANNEE % 400 == 0 or (ANNEE % 100 != 0 and ANNEE % 4 == 0);
}

bool dateEstComprise(const int DATE_MIN[3], const int DATE_MAX[3], const int DATE[3]){
   if(DATE[0] >= DATE_MIN[0] and DATE[0] <= DATE_MAX[0]){
      if(DATE[1] >= DATE_MIN[1] and DATE[1] <= DATE_MAX[1]){
            return (DATE[2] >= DATE_MIN[2] and DATE[2] <= DATE_MAX[1]);
      } else{
         return false;
      }
   } else{
      return false;
   }
}
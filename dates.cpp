#include "dates.h"
#include <iostream>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

bool saisieDate(int& jours, int& mois, int& annee, const char& CAR){

   bool erreur;

   int date[3];

   // Boucle (1) de la saisie de la date
   do {
      cout << "saisir la date : ";

      // Reset l'erreur
      erreur = false;

      // Boucle (2) pour entrer jour mois annee
      for (unsigned i = 0; i < sizeof(date) / sizeof(int); ++i) {
         cin >> date[i];

         // Test de l'erreur du cin
         if (cin.fail()) {
            cin.clear();
            erreur = true;
            cout << endl << "Une erreur est survenue lors de la lecture de la date donnee." << endl;
            cin.ignore(numeric_limits<int>::max(),'\n');

            // Si il y a eu une erreur on quitte la boucle (2) jour mois annee
            break;
         } else if(i != sizeof(date) / sizeof(int) - 1){
            // Vide le buffer jusqu'au caractère choisie
            cin.ignore(numeric_limits<int>::max(),CAR);
         }
      }
   } while(erreur);

   // retourne la date via les référencement
   jours = date[0];
   mois  = date[1];
   annee = date[2];

   return true;
}

bool validationDate(const int DATE[3]){
   const int MOIS_MIN = 1,
             MOIS_MAX = 12,
             JOUR_MIN = 1;

   return !(DATE[1] < MOIS_MIN or DATE[1] > MOIS_MAX or DATE[0] < JOUR_MIN or DATE[0] > nbJoursMax(DATE[1], DATE[2]));
}

//Renvoie le nombre de jours max pour un mois donné d'une année donnée
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
   if(validationDate(DATE)) {
      return (plusGrandeOuEgale(DATE, DATE_MIN) and plusPetiteOuEgale(DATE, DATE_MAX));
   }
}

bool plusPetiteOuEgale(const int DATE[3], const int DATE_REF[3]){
   if(DATE[2] < DATE_REF[2]){
      return true;
   } else if(DATE[2] == DATE_REF[2]){
      if(DATE[1] < DATE_REF[1]){
         return true;
      } else if(DATE[1] == DATE_REF[1]){
         return DATE[0] <= DATE_REF[0];
      } else {
         return false;
      }
   } else {
      return false;
   }
}

bool plusGrandeOuEgale(const int DATE[3], const int DATE_REF[3]){
   if(DATE[2] > DATE_REF[2]){
      return true;
   } else if(DATE[2] == DATE_REF[2]){
      if(DATE[1] > DATE_REF[1]){
         return true;
      } else if(DATE[1] == DATE_REF[1]){
         return DATE[0] >= DATE_REF[0];
      } else {
         return false;
      }
   } else {
      return false;
   }
}

//Renvoie le nombre de jours qui sépare 2 dates
int differenceDate(const int DATE1[3], const int DATE2[3]){
   const int NB_JOURS_ANNEE_BISSEXTILE     = 366,
             NB_JOURS_ANNEE_NON_BISSEXTILE = 365;

   int anneeIntermediaire     = DATE1[2],
       nbAnneeNonBissextile = 0,
       nbAnneeBissextiles   = 0,
       nbJoursTotal           = 0;

   // Pas sûr que ce soit 1, peut être 2
   if((DATE2[2] - DATE1[2] >= 1)){
      if(!(estBissextile(anneeIntermediaire))){
         do{
            nbAnneeNonBissextile++;
            anneeIntermediaire++;
         }while(!(estBissextile(anneeIntermediaire)));
      }
      nbAnneeBissextiles   += (DATE2[2] - anneeIntermediaire) / 4;
      nbAnneeNonBissextile += DATE2[2] - anneeIntermediaire - nbAnneeBissextiles;

      nbJoursTotal += nbAnneeBissextiles * NB_JOURS_ANNEE_BISSEXTILE + nbAnneeNonBissextile * NB_JOURS_ANNEE_NON_BISSEXTILE;
   }
}
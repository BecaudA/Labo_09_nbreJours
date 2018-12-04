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

bool validationDate(const int DATE[]){
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

bool dateEstComprise(const int DATE_MIN[], const int DATE_MAX[], const int DATE[]){
   if(validationDate(DATE)) {
      return (conversionJoursJulien(DATE)>= conversionJoursJulien(DATE_MIN)
              and
              conversionJoursJulien(DATE) <= conversionJoursJulien(DATE_MAX));
   }
}

//Renvoie le nombre de jours qui sépare 2 dates
int differenceDate(const int DATE1[], const int DATE2[]){
   return conversionJoursJulien(DATE2) - conversionJoursJulien(DATE1);

}

//convertie la date du calendrier Grégorien en nombre de jours Julien
int conversionJoursJulien(const int DATE[]){

   int jour = DATE[0],
       mois = DATE[1],
       annee = DATE[2];

   int a, b, c;
   double d, e, joursJulien;

   if(mois == 1 or mois == 2){
      annee--;
      mois += 12;
   }

   a = annee / 100;
   b = a/4;
   c = 2-a+b;
   d = 365.25 * (annee + 4716);
   e = 30.6001 *(mois + 1);

   joursJulien =  c + jour + d + e - 1524.5;

   return (int)joursJulien;
}
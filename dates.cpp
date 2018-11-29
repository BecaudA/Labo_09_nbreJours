#include "dates.h"
#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

bool saisieDate(int& jours, int& mois, int& annee, const char& car){

   bool erreur;

   do{
      erreur = false;

      cout << endl << "Saisie Date : ";
      cin >> jours;
      cin.ignore(numeric_limits<streamsize>::max(),car);

      cin >> mois;
      cin.ignore(numeric_limits<streamsize>::max(),car);

      cin >> annee;
      cin.ignore(numeric_limits<streamsize>::max(),'/n');


      if(cin.fail()){
         erreur = cin.fail();
         cin.clear();
      }
   }while(!erreur);



}

bool validationDate(int date[3]){
   const int MOIS_MIN = 1,
             MOIS_MAX = 12,
             JOUR_MIN = 1,
             JOUR_MAX = 31;

   bool bissextile = estBissextile(date[2]);

   if(date[1] < MOIS_MIN or date[1] > MOIS_MAX){
      return false;
   }
   if(date[0] < JOUR_MIN or date[0] > JOUR_MAX){
      return false;
   }

};

bool estBissextile(const int& annee){
   return annee % 400 == 0 or (annee % 100 != 0 and annee % 4 == 0);
}

int nbJoursMax(const int& mois, const int& annee){
   const int MOIS_MIN = 1,
             MOIS_MAX = 12,
             JOUR_MIN = 1,
             JOUR_MAX = 31;

   
}
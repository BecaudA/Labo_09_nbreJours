#include "dates.h"
#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

bool saisieDate(unsigned int& jours, unsigned int& mois, unsigned int& annee, const char& car){

   cout << endl << "Niveau jour";
   cin >> jours >> mois;

   if(cin.fail()){
      cin.clear();
      cout << endl << "Niveau mois";
      cin.ignore(numeric_limits<streamsize>::max(),car);
      cin >> mois >> annee;
      cout << "mois :" << mois << " annee : " << annee;
      if(cin.fail()){
         cin.ignore(numeric_limits<streamsize>::max(),car);
         cout << endl << "Niveau annee";
         cin >> annee;
         cin.clear();

         return true;
      } else{
         return false;
      }
   } else{
      return false;
   }

}
#include "dates.h"
#include <iostream>
#include <limits>

using namespace std;

string saisieDate(const char& car){

   string jour, mois, annee;

   cin >> jour;
   cin.ignore(numeric_limits<streamsize>::max(), car);
   cin >> mois;
   cin.ignore(numeric_limits<streamsize>::max(), car);
   cin >> annee;

   //return jour + car + mois + car + annee;
   return mois + car + car;
}
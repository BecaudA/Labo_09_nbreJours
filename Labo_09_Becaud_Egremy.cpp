/*
 -----------------------------------------------------------------------------------
 Laboratoire : 09_nbreJours
 Fichier     : Labo_09_Becaud_Egremy.cpp
 Auteur(s)   : Bruno Egremy
 Date        : 27.11.2018

 But         :

 Remarque(s) :

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/
#include "dates.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

   const char   carSeparation = '-';

   const int DATE_MIN[] = {1, 1, 1900},
             DATE_MAX[] = {31, 12, 2200};

   int date1[3]      = {15, 11, 2201},
       date2[3]      = {28, 02, 1915};

   // Ce programme ...
   cout << "Saisie date 1 : ";
   //saisieDate(date1[0], date1[1], date1[2], carSeparation);
   cout << endl << date1[0] << "|" << date1[1] << "|" << date1[2] << endl;
   cout << endl << "Saisie date 2 : ";
   //saisieDate(date2[0], date2[1], date2[2], carSeparation);
   cout << endl << date2[0] << "|" << date2[1] << "|" << date2[2] << endl;

   cout << endl << "Validations : ";
   cout << endl << validationDate(date1);
   cout << endl << validationDate(date2);

   cout << endl << "Verification intervalle : ";
   cout << endl << dateEstComprise(DATE_MIN, DATE_MAX, date1);
   cout << endl << dateEstComprise(DATE_MIN, DATE_MAX, date2);

   // Prendre Date
   // Vérifier Date
   // Calcul différence
   // Afficher résultat
   // Recommencer ?
   // Fin du programme

   return EXIT_SUCCESS;
}
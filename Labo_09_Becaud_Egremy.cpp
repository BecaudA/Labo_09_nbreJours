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

   const int DATE_MIN[] = {4, 5, 1910},
             DATE_MAX[] = {31, 12, 2200};

   int date1[3]      = {15, 11, 2201},
       date2[3]      = {28, 02, 1915};


   int dateTest[3];
   saisieDate(dateTest[0], dateTest[1], dateTest[2], carSeparation);
   cout << "Votre date N°1 : " << dateTest[0] << carSeparation << dateTest[1] << carSeparation << dateTest[2];
   // Ce programme ...

   cout << "Verification intervalle : " << endl;
   cout << dateEstComprise(DATE_MIN, DATE_MAX, date1) << endl;
   cout << dateEstComprise(DATE_MIN, DATE_MAX, date2) << endl;

   // Prendre Date
   // Vérifier Date
   // Calcul différence
   // Afficher résultat
   // Recommencer ?
   // Fin du programme

   return EXIT_SUCCESS;
}
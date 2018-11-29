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

   int date1[3]      = {15, 13, 2015},
       date2[3]      = {31, 05, 1916};

   // Ce programme ...
   cout << "Saisie date 1 : ";
   //saisieDate(date1[0], date1[1], date1[2], carSeparation);
   cout << endl << date1[0] << "|" << date1[1] << "|" << date1[2] << endl;
   cout << endl << "Saisie date 2 : ";
   //saisieDate(date2[0], date2[1], date2[2], carSeparation);
   cout << endl << date2[0] << "|" << date2[1] << "|" << date2[2] << endl;

   validationDate(date1);

   // Prendre Date
   // Vérifier Date
   // Calcul différence
   // Afficher résultat
   // Recommencer ?
   // Fin du programme

   return EXIT_SUCCESS;
}
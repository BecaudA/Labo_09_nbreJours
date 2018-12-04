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

   const char CAR_SEPARATION = '-';

   const int  DATE_MIN[] = {4, 5, 1910},
              DATE_MAX[] = {31, 12, 2200};

   int date1[3],
       date2[3];
   
   // saisie et validation des dates de l'utilisateur
   saisieDate(date1[0], date1[1], date1[2],'-',DATE_MIN, DATE_MAX);
   saisieDate(date2[0], date2[1], date2[2],'-',DATE_MIN, DATE_MAX);

   cout << "Premiere date : ";
   afficherDate(date1, CAR_SEPARATION);
   cout << endl << "Deuxieme date : ";
   afficherDate(date2, CAR_SEPARATION);


   // Ce programme ...
   // Prendre Date
   // Vérifier Date
   // Calcul différence
   // Afficher résultat
   // Recommencer ?
   // Fin du programme

   return EXIT_SUCCESS;
}
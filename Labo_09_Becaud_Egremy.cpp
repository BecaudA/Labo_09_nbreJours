/*
 -----------------------------------------------------------------------------------
 Laboratoire : 09_nbreJours
 Fichier     : Labo_09_Becaud_Egremy.cpp
               annexe.cpp
               annexe.h
               dates.cpp
               date.h
 Auteur(s)   : Bécaud Arthur & Bruno Egremy
 Date        : 05.12.2018

 But         :

 Remarque(s) :

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/
#include <iostream>
#include <cstdlib>
#include "annexe.h"
#include "dates.h"

using namespace std;

int main() {

   const int  DATE_MIN[] = {01, 01, 1900},
              DATE_MAX[] = {31, 12, 2200};

   int date1[3],
       date2[3];

   // Boucle pour recommencer
   do {

      // Message de présentation du programme
      presentationProgramme();

      // Saisie et validation des dates de l'utilisateur
      saisieDate(date1,DATE_MIN, DATE_MAX);
      saisieDate(date2,date1, DATE_MAX);

      // Affiche le nombre de jours séparant les deux dates
      affichageResultat(date1, date2);

   } while(recommencer('O', 'N'));

   // Fin du programme
   quitterProgramme();

   return EXIT_SUCCESS;
}

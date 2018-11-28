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

   const char carSeparation = '-';

   unsigned  int jours1 = 0,
                mois1  = 0,
                annee1 = 0;

   // Ce programme ...
   cout << "Saisie date : ";
   saisieDate(jours1, mois1, annee1, carSeparation);
   cout << endl << jours1 << "|" << mois1 << "|" << annee1 << endl;

   // Prendre Date
   // Vérifier Date
   // Calcul différence
   // Afficher résultat
   // Recommencer ?
   // Fin du programme

   return EXIT_SUCCESS;
}
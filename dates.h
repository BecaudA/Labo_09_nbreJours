#include <string>

#ifndef LABO_09_NBREJOURS_DATES_H
#define LABO_09_NBREJOURS_DATES_H



bool saisieDate(int& jours, int& mois, int& annee, const char& car);

bool validationDate(int date[3]);

bool estBissextile(const int& annee);

int nbJoursMax(const int& mois, const int& annee)

#endif //LABO_09_NBREJOURS_DATES_H

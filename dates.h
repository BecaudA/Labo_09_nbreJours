#ifndef LABO_09_NBREJOURS_DATES_H
#define LABO_09_NBREJOURS_DATES_H


bool saisieDate(int& jours, int& mois, int& annee, const char& CAR);

bool validationDate(const int DATE[3]);

bool estBissextile(const int& ANNEE);

int nbJoursMax(const int& MOIS, const int& ANNEE);

bool dateEstComprise(const int DATE_MIN[3], const int DATE_MAX[3], const int DATE[3]);

#endif //LABO_09_NBREJOURS_DATES_H

#ifndef LABO_09_NBREJOURS_DATES_H
#define LABO_09_NBREJOURS_DATES_H


bool saisieDate(int& jours, int& mois, int& annee, const char& CAR);

bool validationDate(const int DATE[]);

bool estBissextile(const int& ANNEE);

int nbJoursMax(const int& MOIS, const int& ANNEE);

bool dateEstComprise(const int DATE_MIN[], const int DATE_MAX[], const int DATE[]);

bool plusPetiteOuEgale(const int DATE[], const int DATE_REF[]);

bool plusGrandeOuEgale(const int DATE[], const int DATE_REF[]);

int differenceDate(const int DATE1[], const int DATE2[]);

int conversionJoursJulien(const int DATE[]);

#endif //LABO_09_NBREJOURS_DATES_H

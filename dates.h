#ifndef LABO_09_NBREJOURS_DATES_H
#define LABO_09_NBREJOURS_DATES_H

/**
 * @brief
 * @param jours
 * @param mois
 * @param annee
 * @param CAR
 * @param DATE_MIN
 * @param DATE_MAX
 * @return
 */
bool saisieDate(int& jours, int& mois, int& annee, const char& CAR, const int DATE_MIN[], const int DATE_MAX[]);

bool validationDate(const int DATE[3]);

bool estBissextile(const int& ANNEE);

int nbJoursMax(const int& MOIS, const int& ANNEE);

bool dateEstComprise(const int DATE_MIN[3], const int DATE_MAX[3], const int DATE[3]);

bool plusPetiteOuEgale(const int DATE[3], const int DATE_REF[3]);

bool plusGrandeOuEgale(const int DATE[3], const int DATE_REF[3]);

int differenceDate(const int DATE1[3], const int DATE2[3]);

void afficherDate(const int DATE[3], const char& CAR);

#endif //LABO_09_NBREJOURS_DATES_H

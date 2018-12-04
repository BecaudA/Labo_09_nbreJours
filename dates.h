#ifndef LABO_09_NBREJOURS_DATES_H
#define LABO_09_NBREJOURS_DATES_H

/**
 * @brief Saisie une date
 * @param jour Jour en retour
 * @param mois Mois en retour
 * @param annee Annee en retour
 * @param CAR Caractere de separation
 * @param DATE_MIN Date minimale a saisir
 * @param DATE_MAX Date maximale a saisir
 * @details Demande a l'utilisateur de sasair une date dans un format donnee.
 *  La date est ensuite verifiee (format & borne).
 */
void saisieDate(int& jour, int& mois, int& annee, const char& CAR, const int DATE_MIN[], const int DATE_MAX[]);

/**
 * @brief Vérifie que la date donnée soit valide
 * @param DATE Date à vérifier
 * @return
 */
bool validationDate(const int DATE[]);

bool estBissextile(const int& ANNEE);

int nbJoursMax(const int& MOIS, const int& ANNEE);

bool dateEstComprise(const int DATE_MIN[], const int DATE_MAX[], const int DATE[]);

bool plusPetiteOuEgale(const int DATE[], const int DATE_REF[]);

bool plusGrandeOuEgale(const int DATE[], const int DATE_REF[]);

int differenceDate(const int DATE1[], const int DATE2[]);

int conversionJoursJulien(const int DATE[]);

void afficherDate(const int DATE[3], const char& CAR);

#endif //LABO_09_NBREJOURS_DATES_H

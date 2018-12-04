#ifndef LABO_09_NBREJOURS_DATES_H
#define LABO_09_NBREJOURS_DATES_H

/**
 * @brief Saisir une date
 * @param date Date à retourner
 * @param DATE_MIN Date minimale à saisir
 * @param DATE_MAX Date maximale à saisir
 * @param CAR Caractère de separation (par défaut : '-')
 * @details Demande à l'utilisateur de saisir une date dans un format JJ-MM-AAAA.
 *  La date est ensuite vérifiée (format & borne).
 */
void saisieDate(int date[], const int DATE_MIN[], const int DATE_MAX[], const char& CAR = '-');

/**
 * @brief Vérifie que la date donnée soit valide
 * @param DATE Date à vérifier
 * @return Un bool indiquant true : valide / false : non-valide
 */
bool validationDate(const int DATE[]);

/**
 * @brief Indique si l'année donnée est bissextile
 * @param ANNEE Année testée
 * @return Un bool indiquant true : bissextile / false : non-bissextile
 */
bool estBissextile(const int& ANNEE);

/**
 * @brief Calcul le nombre de jours maximum d'un mois
 * @param MOIS Mois
 * @param ANNEE Annee
 * @return Nombre de jours maximum du mois donné
 */
int nbJoursMax(const int& MOIS, const int& ANNEE);

/**
 * @brief Vérifie si la date donnée est comprise entre deux dates
 * @param DATE_MIN Date minimale
 * @param DATE_MAX Date maximale
 * @param DATE Date à tester
 * @return Un bool indiquant true : comprise / false : non-comprise
 */
bool dateEstComprise(const int DATE_MIN[], const int DATE_MAX[], const int DATE[]);

/**
 * @brief Calcul la différence de jours entre deux dates
 * @param DATE1 Date numéro 1
 * @param DATE2 Date numéro 2
 * @return Le nombre de jours de différence
 */
int differenceDate(const int DATE1[], const int DATE2[]);

/**
 * @brief Convertie une date grégorienne en jours Julien
 * @param DATE Date à convertir
 * @return La date en jours Julien
 * @details Convertie la date en nombre de jours écoulés depuis 01.01.-4712 à 12h00
 * Source : https://fr.wikipedia.org/wiki/Jour_julien#Calendrier_gr.C3.A9gorien
 *          https://quasar.as.utexas.edu/BillInfo/JulianDatesG.html
 */
int conversionJoursJulien(const int DATE[]);

/**
 * @brief Affiche une date dans le format JJ MM AAAA
 * @param DATE Date à afficher
 * @param CAR Caractère de séparation de la date
 */
void afficherDate(const int DATE[], const char& CAR = '-');

#endif //LABO_09_NBREJOURS_DATES_H

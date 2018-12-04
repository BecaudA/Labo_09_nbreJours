#ifndef LABO_09_NBREJOURS_ANNEXE_H
#define LABO_09_NBREJOURS_ANNEXE_H

/**
 * @brief Affiche le but du programme
 */
void presentationProgramme();

/**
 * @brief Affiche le nombre de jours qui séparent deux dates
 * @param DATE1 Première date
 * @param DATE2 Deuxième date
 */
void affichageResultat(const int DATE1[], const int DATE2[]);

/**
 * @brief Message et saisie pour recommencer un service
 * @param OUI Caractère indiquant oui
 * @param NON Caractère indiquant non
 * @return Un bool indiquant true : oui / false : non
 */
bool recommencer(const char& OUI, const char& NON);

/**
 * @brief Message pour quitter le programme
 */
void quitterProgramme();

#endif //LABO_09_NBREJOURS_ANNEXE_H

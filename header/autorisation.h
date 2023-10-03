//
// Created by Arthur Mathis on 03/10/2023.
//

#ifndef EC1_AUTORISATION_H
#define EC1_AUTORISATION_H

#include <iostream>

/**
 * @brief Class Autorisation
 */
class autorisation {
public :
    autorisation(int niveau = 1, bool activee = false);

    /**
     * @brief Méthode retournant le niveaud de l'autorisation
     * @return
     */
    int niveau() const;
    /**
     * @brief Méthode retournant l'activation d'une autorisation
     * @return
     */
    bool activee() const;

    /**
     * @brief Méthode retournant si l'autorisation est inférieure à l'autorisation de comparaison
     * @param a L'autorisation de comparaison
     * @return
     */
    bool inferieureA(const autorisation &a) const;
    /**
     * @brief Méthode activant l'autorisation
     */
    void active();
    /**
     * @brief Méthode désactivant l'autorisation
     */
    void desactive();

    /**
     * @brief Méthode écrivant dans un flux sortant les données de la class
     * @param ost Le flux de sortie
     */
    void affichSur(std::ostream &ost) const;
    /**
     * @brief Méthode lisant dans un lfux d'entrée les données de la class
     * @param ist Le flux d'entrée
     */
    void litDepuis(std::istream &ist);

    /**
     * @brief Surcharge de l'opérateur d'égalité
     * @param a
     * @return
     */
    bool operator==(const autorisation &a) const;

private :
    int d_niveau;
    bool d_activee;
};

/**
 * @brief Surcharge de l'opérateur de sortie
 * @param ost Le flux de sortie
 * @param a L'autorisation
 * @return
 */
std::ostream& operator<<(std::ostream &ost, const autorisation &a);
/**
 * @brief Surcharge de l'opérateur d'entrée
 * @param ist L'opérateur d'entrée
 * @param a L'autorisation
 * @return
 */
std::istream& operator>>(std::istream &ist, autorisation &a);


#endif //EC1_AUTORISATION_H

//
// Created by Arthur Mathis on 03/10/2023.
//

#ifndef EC1_BADGE_H
#define EC1_BADGE_H

#include <string>
#include "autorisation.h"

class badge {
public :
    badge(std::string id, const autorisation &a);
    badge(std::string id, int niveau);

    /**
     * @brief Méthode retournant l'identifiant du badge
     * @return
     */
    std::string id() const;
    /**
     * @brief Méthode retournant si l'autorisation est valide
     * @return
     */
    bool estValide(const autorisation &a) const;

    /**
     * @brief Méthode activant l'autorisation du badge
     */
    void active();
    /**
     * @brief Méthode désactivant l'autorisation du badge
     */
    void desactive();

    /**
 * @brief Méthode affichant dans un flux de sortie les données du badge
 * @param ost Le flux
 */
    void affichSur(std::ostream &ost) const;
    /**
     * @brief Méthode lisant les données du badge dans un flux entrant
     * @param ost Le flux
     */
    void litDepuis(std::istream &ist);

    /**
     * @brief Surcharge de l'opérateur d'égalite
     * @param b
     * @return
     */
    bool operator==(const badge &b) const;

private :
    std::string d_id;
    autorisation d_autorisation;
};

/**
 * @brief Surchargecde l'opérateur de sortie
 * @param ost Le flux
 * @param b Le badge
 * @return
 */
std::ostream& operator<<(std::ostream &ost, const badge &b);
/**
 * @brief Surcharge de l'opérateur d'entrée
 * @param ist Le flux
 * @param b Le badge
 * @return
 */
std::istream& operator>>(std::istream &ist, badge &b);


#endif //EC1_BADGE_H

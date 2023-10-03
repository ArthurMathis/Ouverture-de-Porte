//
// Created by Arthur Mathis on 03/10/2023.
//

#ifndef EC1_PORTE_H
#define EC1_PORTE_H

#include <vector>

#include "autorisation.h"
#include "badge.h"

/**
 * @brief Class porte
 */
class porte {
public :
    porte(const autorisation a, const std::vector<badge> &vect = {});

    /**
     * @brief Méthode ouvrant la porte
     */
    void ouvre();
    /**
     * @brief Méthode bloquant la porte
     */
    void bloque();

    /**
     * @brief Méthode Analysant un badge afin d'ouvrir ou no  la porte
     * @param b
     */
    void litBadge(const badge &b);
    /**
     * @brief Méthode ajoutant le badge à l'historique de scan
     * @param b
     */
    void enregistreBadge(const badge &b);
    /**
     * @brief Méthode retournant le nombre de scan d'un badge
     * @param b
     */
    int nombreFoisLu(const badge &b) const;

private :
    std::vector<badge> d_badgeLus;
    autorisation d_autorisation;
};


#endif //EC1_PORTE_H

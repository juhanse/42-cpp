/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:24:31 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/21 22:42:37 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void PmergeMe::fordJohnson(T& container) {
    size_t size = container.size();

    if (size < 2) {
		return;
	}

    // 1. GESTION DE L'ÉLÉMENT IMPAIR (STRAGGLER)
    bool hasStraggler = (size % 2 != 0);
    int straggler = 0;
    if (hasStraggler) {
        straggler = container.back();
        container.pop_back();
    }

    // 2. CRÉATION DES PAIRES ET TRI INDIVIDUEL
    // On crée une liste de paires où .first est toujours le plus grand
    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < container.size(); i += 2) {
        int a = container[i];
        int b = container[i + 1];

        if (a < b) {
			std::swap(a, b);
		}
        pairs.push_back(std::make_pair(a, b));
    }

    // 3. TRI RÉCURSIF DES "GAGNANTS" (Main Chain)
    T mainChain;
    for (size_t i = 0; i < pairs.size(); ++i) {
        mainChain.push_back(pairs[i].first);
    }
    
    // Appel récursif sur la liste des plus grands
    fordJohnson(mainChain);

    // 4. INSERTION DES "PERDANTS" (Pending Elements)
    // On insère d'abord le petit élément qui était associé au premier élément de la mainChain
    // car on sait qu'il est le plus petit de tous.
    T pending;
    for (size_t i = 0; i < pairs.size(); ++i) {
        // On retrouve le 'small' associé au 'large' correspondant
        // (Note: Dans une version optimisée avec Jacobsthal, l'ordre ici est crucial)
        if (pairs[i].first == mainChain[0]) {
            mainChain.insert(mainChain.begin(), pairs[i].second);
        } else {
            pending.push_back(pairs[i].second);
        }
    }

    // Insertion du reste des éléments via recherche binaire
    for (typename T::iterator it = pending.begin(); it != pending.end(); ++it) {
        typename T::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), *it);
        mainChain.insert(pos, *it);
    }

    // 5. RÉINSERTION DU STRAGGLER À LA FIN
    if (hasStraggler) {
        typename T::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }

    container = mainChain;
}

template<typename T>
void printContainer(const T& c) {
	for (typename T::const_iterator it = c.begin(); it != c.end(); ++it) {
		std::cout << *it << " ";
	}
}

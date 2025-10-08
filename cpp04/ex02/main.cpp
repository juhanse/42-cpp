/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 16:15:09 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
    Dog dog1;
    Dog dog2;
    Cat cat1;
    Cat cat2;

    dog1.getBrain()->setIdea(0, "Coucou dog1");
    dog2 = dog1;
    dog2.getBrain()->setIdea(0, "Coucou dog2");

    cat1.getBrain()->setIdea(0, "Coucou cat1");
    cat2 = cat1;
    cat2.getBrain()->setIdea(0, "Coucou cat2");

    Dog dogs[] = { dog1, dog2 };
    Cat cats[] = { cat1, cat2 };

    for (int i = 0; i < 2; ++i) {
        std::cout << dogs[i].getType() << " idea 0: " << dogs[i].getBrain()->getIdea(0) << std::endl;
        std::cout << cats[i].getType() << " idea 0: " << cats[i].getBrain()->getIdea(0) << std::endl;
        dogs[i].makeSound();
        cats[i].makeSound();
    }

    return (0);
}

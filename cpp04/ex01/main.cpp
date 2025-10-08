/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 15:58:44 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
    std::cout << "=== Creating Animals ===" << std::endl;

    Dog* dogA = new Dog();
    Dog* dogB = new Dog();
    Cat* catA = new Cat();
    Cat* catB = new Cat();

    std::cout << "\n=== Filling Brain ideas ===" << std::endl;
    for (int i = 0; i < 5; i++) {
        dogA->getBrain()->setIdea(i, "DogA idea " + std::to_string(i));
        dogB->getBrain()->setIdea(i, "DogB idea " + std::to_string(i));
        catA->getBrain()->setIdea(i, "CatA idea " + std::to_string(i));
        catB->getBrain()->setIdea(i, "CatB idea " + std::to_string(i));
    }

    std::cout << "\n=== Showing Brain ideas ===" << std::endl;
    for (int i = 0; i < 5; i++) std::cout << dogA->getBrain()->getIdea(i) << " | ";
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) std::cout << dogB->getBrain()->getIdea(i) << " | ";
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) std::cout << catA->getBrain()->getIdea(i) << " | ";
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) std::cout << catB->getBrain()->getIdea(i) << " | ";
    std::cout << std::endl;

    std::cout << "\n=== Testing deep copy ===" << std::endl;
    Dog* dogC = new Dog();
    dogC->getBrain()->setIdea(0, "Chase the cat");
    Dog* dogD = new Dog(*dogC); // deep copy

    std::cout << "dogC idea 0: " << dogC->getBrain()->getIdea(0) << std::endl;
    std::cout << "dogD idea 0: " << dogD->getBrain()->getIdea(0) << std::endl;

    dogD->getBrain()->setIdea(0, "Sleep on the couch");

    std::cout << "After modification:" << std::endl;
    std::cout << "dogC idea 0: " << dogC->getBrain()->getIdea(0) << std::endl;
    std::cout << "dogD idea 0: " << dogD->getBrain()->getIdea(0) << std::endl;

    std::cout << "\n=== Deleting Animals ===" << std::endl;
    delete dogA;
    delete dogB;
    delete catA;
    delete catB;
    delete dogC;
    delete dogD;

    std::cout << "\n=== End of program ===" << std::endl;
    return (0);
}

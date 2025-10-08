/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 15:33:50 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    std::cout << "=== Polymorphism ===" << std::endl;
    const Animal* a1 = new Animal();
    const Animal* a2 = new Cat();
    const Animal* a3 = new Dog();

    std::cout << a1->getType() << " says: "; a1->makeSound();
    std::cout << a2->getType() << " says: "; a2->makeSound();
    std::cout << a3->getType() << " says: "; a3->makeSound();

    delete a1;
    delete a2;
    delete a3;

    std::cout << "\n=== Wrong ===" << std::endl;
    const WrongAnimal* w1 = new WrongAnimal();
    const WrongAnimal* w2 = new WrongCat();

    std::cout << w1->getType() << " says: "; w1->makeSound();
    std::cout << w2->getType() << " says: "; w2->makeSound();

    delete w1;
    delete w2;

    return (0);
}

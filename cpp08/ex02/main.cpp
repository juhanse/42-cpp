/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:12:13 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/02 14:51:24 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void) {
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << std::endl << "Reverse iterator test :" << std::endl;

		MutantStack<std::string> test;
	
		test.push("hello");
		test.push("world");
		test.push("!");

		std::cout << "Size of stack: " << test.size() << std::endl;

		MutantStack<std::string>::reverse_iterator it = test.rbegin();
		while (it != test.rend()) {
			std::cout << *it << std::endl;
			++it;
		}
	}
	return (0);
}

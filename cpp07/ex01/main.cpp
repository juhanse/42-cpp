/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:07:54 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 15:40:43 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

size_t	ft_strlen(char *s) {
	size_t i = 0;

	while (s[i])
		i++;
	return (i);
}

void	ft_print_len(char *&str) {
	std::cout << "Length of " << str << " = " << ft_strlen(str) << std::endl;
}

int main(int ac, char **av) {
	iter(av + 1, ac - 1, ft_print_len);
	return (0);
}

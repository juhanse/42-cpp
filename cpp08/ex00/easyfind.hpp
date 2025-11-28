/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/11/28 18:09:50 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <algorithm>

template <typename T>
int	easyfind(T c, int n) {
	typename T::iterator it = std::find(c.begin(), c.end(), n);
	if (it != c.end())
		return (*it);
	throw std::runtime_error("Value not found in container");
}

#endif

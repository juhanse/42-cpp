/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:51:45 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/07 21:55:03 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	private:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);

		Brain& operator=(const Brain& other);

		std::string getIdea(int index) const;
		void setIdea(int index, const std::string& idea);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:35 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/15 18:18:39 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
	private:
		std::string		_name;
		bool			_isSigned;	
		unsigned int	_gradeSign;
		unsigned int	_gradeExecute;

	public:
		Form(void);
		Form(const std::string& name, bool isSigned, unsigned int gradeSign, unsigned int gradeExecute);
		Form(const Form& copy);
		~Form();

		Form& operator=(const Form& other);

		std::string getName(void) const;
		bool getIsSigned(void) const;
		unsigned int getGradeSign(void) const;
		unsigned int getGradeExecute(void) const;

		void setName(const std::string& name);
		void setGradeSign(unsigned int grade);
		void setGradeExecute(unsigned int grade);

		void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif

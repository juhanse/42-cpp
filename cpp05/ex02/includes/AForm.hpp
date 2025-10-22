/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:35 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:03:08 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_isSigned;	
		const int			_gradeSign;
		const int			_gradeExecute;

	public:
		AForm();
		AForm(const std::string& name, const int gradeSign, const int gradeExecute);
		AForm(const AForm& copy);
		virtual ~AForm();

		AForm& operator=(const AForm& other);

		std::string getName(void) const;
		bool getIsSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExecute(void) const;

		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
	
		class FormNotSignedException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

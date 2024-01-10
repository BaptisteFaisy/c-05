/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:09:38 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/10 14:52:31 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
public:
	// Constructors
	Bureaucrat();
	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(const Bureaucrat& other);

	// Assignment operator overload
	Bureaucrat& operator=(const Bureaucrat& rhs);

	// Destructor
	~Bureaucrat();

	// Getters
	std::string const getName() const;
	unsigned int getGrade() const;

	void incrementGrade();
	void decrementGrade();
	void signForm(Form& form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

private:

	std::string const	_name;
	unsigned int		_grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);
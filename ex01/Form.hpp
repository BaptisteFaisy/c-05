/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 05:08:10 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/10 15:51:40 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
public:
	Form(const std::string& name);
	Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec);
	Form(const Form& other);

	Form& operator=(const Form& rhs);

	~Form();

	unsigned int getGradeSign() const;
	unsigned int getGradeExec() const;
	std::string getName() const;
	bool isSigned() const;

	void beSigned(const Bureaucrat& candidate);

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

	class FormAlreadySignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};

private:
	const std::string	_name;
	bool				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);
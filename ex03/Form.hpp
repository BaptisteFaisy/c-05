/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 05:08:10 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 17:37:27 by bfaisy           ###   ########.fr       */
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
	Form(const std::string& name, const std::string& target, const unsigned int gradeSign, const unsigned int gradeExec);
	Form(const Form& other);

	Form& operator=(const Form& rhs);

	~Form();

	unsigned int getGradeSign() const;
	unsigned int getGradeExec() const;
	std::string getName() const;
	bool isSigned() const;
	std::string getTarget() const;
	void execute(const Bureaucrat& executor) const;
	virtual void action(const Bureaucrat& executor) const = 0;

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
	class FormNotSignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};

private:
	const std::string	_name;
	bool				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExec;
	const std::string	_target;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);
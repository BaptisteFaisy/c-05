/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 05:08:07 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 17:37:22 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec)
	: _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other)
	: _name(other._name), _signed(other._signed), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
}

Form& Form::operator=(const Form& rhs)
{
	(void)rhs;
	return *this;
}

Form::~Form()
{
}

unsigned int Form::getGradeSign() const
{
	return this->_gradeSign;
}

unsigned int Form::getGradeExec() const
{
	return this->_gradeExec;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::isSigned() const
{
	return this->_signed;
}

void Form::beSigned(const Bureaucrat& candidate)
{
	if (!this->_signed)
	{
		if (candidate.getGrade() <= this->_gradeSign)
			this->_signed = true;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::FormAlreadySignedException();
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << "Form " << rhs.getName() << ": ";
	o << "{signed: " << std::boolalpha << rhs.isSigned() << ", gradeSign: " << rhs.getGradeSign() << ", gradeExec: " << rhs.getGradeExec() << "}";
	return o;
}

void Form::execute(const Bureaucrat& executor) const
{
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
}
Form::Form(const std::string& name, const std::string& target, const unsigned int gradeSign, const unsigned int gradeExec)
	: _name(name), _target(target), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}
std::string Form::getTarget() const
{
	return this->_target;
}
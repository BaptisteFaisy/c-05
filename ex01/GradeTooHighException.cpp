/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 18:52:26 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/10 14:52:51 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {return ("Grade too low ");}

const char* Form::GradeTooHighException::what() const throw() {return ("Grade too high");}

const char* Form::GradeTooLowException::what() const throw() {return ("Grade too low");}

const char* Form::FormAlreadySignedException::what() const throw() { return ("Form already signed");}

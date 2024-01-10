/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:09:35 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/08 05:35:57 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name1, int grade1) : name(name1) {if (grade1 > 150) throw Bureaucrat::GradeTooHighException(); else if (grade1 <= 0) throw Bureaucrat::GradeTooLowException(); else grade = grade1;}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getgrade() const {return grade;}

std::string Bureaucrat::getName() const {return name;}

void Bureaucrat::addgrade(int value) {if (grade + value <= 150) grade += value; else throw Bureaucrat::GradeTooHighException();}

void Bureaucrat::downgrade(int value) {if (grade - value > 0) grade -= value; else throw Bureaucrat::GradeTooLowException();}


std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getgrade();
	return o;
}
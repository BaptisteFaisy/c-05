/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:09:40 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 17:51:29 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));

	Bureaucrat john("John", 5);
	Bureaucrat jim("Jim", 45);
	Bureaucrat jane("Jane", 137);

	std::cout << john << std::endl;
	std::cout << jim << std::endl;
	std::cout << jane << std::endl;

	ShrubberyCreationForm shrubbery("home");
	PresidentialPardonForm pardon("Stephen Bannon");
	RobotomyRequestForm robotomy("Bender");

	john.executeForm(shrubbery);
	jim.executeForm(shrubbery);
	jane.executeForm(shrubbery);
	std::cout << std::endl;
	john.signForm(shrubbery);
	jim.signForm(shrubbery);
	jane.signForm(shrubbery);
	std::cout << std::endl;
	john.executeForm(shrubbery);
	jim.executeForm(shrubbery);
	jane.executeForm(shrubbery);
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	john.executeForm(pardon);
	jim.executeForm(pardon);
	jane.executeForm(pardon);
	std::cout << std::endl;
	john.signForm(pardon);
	jim.signForm(pardon);
	jane.signForm(pardon);
	std::cout << std::endl;
	john.executeForm(pardon);
	jim.executeForm(pardon);
	jane.executeForm(pardon);
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	john.executeForm(robotomy);
	jim.executeForm(robotomy);
	jane.executeForm(robotomy);
	std::cout << std::endl;
	john.signForm(robotomy);
	jim.signForm(robotomy);
	jane.signForm(robotomy);
	std::cout << std::endl;
	john.executeForm(robotomy);
	jim.executeForm(robotomy);
	jane.executeForm(robotomy);
}
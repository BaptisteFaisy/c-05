/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:09:40 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/08 05:06:51 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	if (std::atoi(av[1]) == 0){
		try
		{
			Bureaucrat john("John", -1);
			Bureaucrat jim("Jim", 151);
			std::cout << john << std::endl;
			std::cout << jim << std::endl;
			john.addgrade(1);
			jim.downgrade(1);
			std::cout << john << std::endl;
			std::cout << jim << std::endl;
			john.downgrade(100);
			jim.addgrade(100);
			std::cout << john << std::endl;
			std::cout << jim << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
	try
	{
		Bureaucrat john("John", 26);
		Bureaucrat jim("Jim", 46);

		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.addgrade(1);
		jim.downgrade(1);
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.downgrade(10);
		jim.addgrade(10);
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
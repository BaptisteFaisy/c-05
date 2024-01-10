/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:09:38 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/08 05:11:19 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
private :
	std::string const name;
	int grade;

public :
	Bureaucrat(std::string const name1, int grade1);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	int getgrade() const;
	std::string getName() const;
	
	void addgrade(int value);
	void downgrade(int value);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public :
		const char* what() const throw();
	};
	
};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:18:33 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 18:25:23 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

class Intern
{
public:
	Intern();

	~Intern();

	class InvalidFormException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	Form* makeForm(const std::string& formName, const std::string& target) const;
};
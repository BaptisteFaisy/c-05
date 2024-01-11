/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:24:24 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 16:47:32 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

	~ShrubberyCreationForm();

	void action(const Bureaucrat& executor) const;

private:

	ShrubberyCreationForm();
};
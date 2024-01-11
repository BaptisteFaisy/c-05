/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:24:31 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 17:35:39 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& other);

	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

	~PresidentialPardonForm();

	void action(const Bureaucrat& executor) const;

private:
	PresidentialPardonForm();
};
#endif
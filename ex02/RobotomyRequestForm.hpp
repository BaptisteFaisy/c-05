/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:24:36 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/11 17:31:47 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& other);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

	~RobotomyRequestForm();

	void action(const Bureaucrat& executor) const;

private:

	RobotomyRequestForm();
};
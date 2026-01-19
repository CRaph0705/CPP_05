/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:47:05 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 16:50:57 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* 
PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.
 */


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 0, 25, 5, target)
{
	std::cout << "PresidentialPardonForm overloaded constructor function called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm("PresidentialPardonForm", 0, 25, 5, cpy.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor function called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	std::cout << "PresidentialPardonForm overloaded operator= function called." << std::endl;
	if (this != &cpy)
		return (*this);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor function called." << std::endl;
	return ;
}

void		PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecutionGrade())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "We inform you that" 
		<< this->getTarget() 
		<< "has been pardoned by Zaphod Beeblebrox." 
		<< std::endl;
	}
	return ;
}
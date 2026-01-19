/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:46:58 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 16:37:26 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default constructor function called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("RobotomyRequestForm", 0, 72, 45, target)
{
	std::cout << "RobotomyRequestForm default constructor function called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm::AForm("RobotomyRequestForm", 0, 72, 45, cpy.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor function called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor function called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	std::cout<< "RobotomyRequestForm overloaded operator= function called" << std::endl;
	if (this != &cpy)
		return (*this);
	return (*this);
}

/* ************************************************************************* */

void RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecutionGrade())
		throw AForm::GradeTooLowException();
	else
	{
		this->Robotomize();
	}
	return ;
}

/* ************************************************************************* */


void RobotomyRequestForm::Robotomize() const
{
	bool success;
	// generate a new rand number each time the program is executed 
	// > https://www.w3schools.com/cpp/cpp_howto_random_number.asp
	srand(time(0)); 
	success = std::rand()%2;
	std::cout << "BRRRRRRRRRR BRRRRRRRRRRRRRRRR" << std::endl;
	if (success)
	{
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	}
	else
	{
		std::cout << "Robotomization failed on " << this->getTarget() << "." << std::endl;
	}
	return ;
}

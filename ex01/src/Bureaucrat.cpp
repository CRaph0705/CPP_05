/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:33:23 by rcochran          #+#    #+#             */
/*   Updated: 2026/02/10 11:12:52 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150)
{
	std::cout<< "Bureaucrat default constructor function called" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout<< "Bureaucrat destructor function called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &cpy) : _name(cpy._name)
{
	std::cout<< "Bureaucrat copy constructor function called" << std::endl;
	setGrade(cpy._grade);
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	std::cout<< "Bureaucrat overloaded constructor function called" << std::endl;
	setGrade(grade);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &cpy )
{
	if (this == &cpy)
		return (*this);
	std::cout<< "Bureaucrat overloaded operator= function called" << std::endl;
	setGrade(cpy._grade);
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		throw e;
	}
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
	
}

std::ostream &operator<<(std::ostream& stream, const Bureaucrat &bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (stream);
}
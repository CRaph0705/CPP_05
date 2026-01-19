
#pragma once
#include <iostream>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private :
	
	public :
	Intern( void );
	Intern( const Intern &cpy );
	~Intern( );
	Intern &operator=(const Intern &cpy);

	AForm *makeForm(std::string formName, const std::string formTarget);
	AForm	*makePresidentialPardonForm(const std::string target);
	AForm		*makeRobotomyRequestForm(const std::string target);
	AForm	*makeShrubberyCreationForm(const std::string target);

	class InvalidInputException : public std::exception
	{
		const char* what() const throw() {return "Form request is invalid.";};
	} ;
} ;
#include "Intern.hpp"


Intern::Intern( void )
{
	std::cout << "Intern default constructor function called." << std::endl;
}

Intern::Intern( const Intern &cpy )
{
	(void)cpy;
	std::cout << "Intern copy constructor function called." << std::endl;
}

Intern::~Intern( )
{
	std::cout << "Intern destructor function called." << std::endl;
}

Intern &Intern::operator=(const Intern &cpy)
{
	(void)cpy;
	std::cout << "Intern overloaded operator= function called." << std::endl;
	return (*this);
}

AForm	*Intern::makePresidentialPardonForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeRobotomyRequestForm(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeShrubberyCreationForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string formName, const std::string formTarget)
{
	AForm *(Intern::*makers[])(const std::string target) =
	{
		&Intern::makePresidentialPardonForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makeShrubberyCreationForm
	};
	std::string validNames[] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == validNames[i])
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			return ((this->*makers[i])(formTarget));
		}
	}
	std::cout << "Form request is invalid.";
	return (NULL);
}

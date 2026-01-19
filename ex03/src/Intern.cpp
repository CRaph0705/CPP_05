#include "Intern.hpp"


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
	// AForm *(*constructors[])(const std::string target) = {
	// 	Intern::&makePresidentialPardonForm,
	// 	Intern::&makeRobotomyRequestForm,
	// 	Intern::&makeShrubberyCreationForm
	// };


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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:45:48 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 14:42:17 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("ShrubberyCreationForm", 0, 145, 137, "default" )
{
	std::cout << "ShrubberyCreationForm default constructor function called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("ShrubberyCreationForm", 0, 145, 137, target)
{
	std::cout << "ShrubberyCreationForm overloaded constructor function called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm::AForm("ShrubberyCreationForm", 0, 145, 137, cpy.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor function called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor function called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	std::cout<< "ShrubberyCreationForm overloaded operator= function called" << std::endl;
	if (this != &cpy)
		return (*this);
	return (*this);
}

/* ************************************************************************* */

int		ShrubberyCreationForm::CreateFile()
{
	std::ofstream	outfile;
	std::string		filename;
	filename = this->getTarget();

	outfile.open((filename + "_shrubbery").c_str());
	if (!outfile.good())
	{
		std::cout << "target file creation ko" << std::endl;
		return (1);
	}
	outfile.close();
	this->PlantTree((filename + "_shrubbery"));
	return (0);
}

int	ShrubberyCreationForm::PlantTree( std::string filename )
{
	std::ofstream	outfile;

	outfile.open((filename).c_str());
	if (!outfile.good())
	{
		std::cout << "target file ko" << std::endl;
		return (1);
	}
	outfile 
	<< "   -----------   \n" 
	<< "  /~~       ~~\\\n" 
	<< " /~~         ~~\\\n" 
	<< "{               }\n"
	<< " \\  _-     -_  /\n"
	<<"   ~  \\\\ //  ~\n"
	<<"_- -   | | _- _\n"
	<<"  _ -  | |   -_\n"
    <<"      // \\\\\n";
	outfile.close();	
	return (0);
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
	(void) executor;
	return ;
}

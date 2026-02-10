/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:57:57 by rcochran          #+#    #+#             */
/*   Updated: 2026/02/10 11:14:59 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) :  _name("default"), _is_signed(0), _signatory_grade(1), _execution_grade(150), _target("default")
{
	std::cout << "AForm default constructor function called." << std::endl;
}
AForm::~AForm()
{
	std::cout << "AForm destructor function called." << std::endl;
}

AForm::AForm( const AForm &cpy) : _name(cpy._name), _signatory_grade(cpy._signatory_grade), _execution_grade(cpy._execution_grade), _target(cpy._target)
{
	std::cout<< "AForm copy constructor function called" << std::endl;
	this->_is_signed = cpy._is_signed;
}
AForm::AForm( std::string name, bool is_signed, int signatory_grade, int execution_grade, std::string target) : _name(name), _is_signed(is_signed), _signatory_grade(signatory_grade), _execution_grade(execution_grade), _target(target)
{
	std::cout<< "AForm overloaded constructor function called" << std::endl;
	if (_signatory_grade > 150 || execution_grade > 150)
		throw AForm::GradeTooLowException();
	if (_signatory_grade < 1 || execution_grade < 1)
		throw AForm::GradeTooHighException();
}
AForm& AForm::operator=( const AForm &cpy )
{
	if (this == &cpy)
		return (*this);
	std::cout<< "AForm overloaded operator= function called" << std::endl;
	this->_is_signed = cpy._is_signed;
	return (*this);
}


/* ************************************************************************* */
/* GETTERS */

const std::string	AForm::getName() const
{
	return (_name);
}

const std::string	AForm::getTarget() const
{
	return (_target);
}

int	AForm::getSignatoryGrade() const
{
	return (_signatory_grade);
}

int	AForm::getExecutionGrade() const
{
	return (_execution_grade);
}
bool	AForm::getIsSigned() const
{
	return (_is_signed);
}


void	AForm::beSigned(Bureaucrat &b)
{
	if (_is_signed)
		throw AForm::FormAlreadySignedException();
	if (b.getGrade() >= this->getSignatoryGrade())
		throw AForm::GradeTooLowException();
	_is_signed = true;
}

std::ostream &operator<<(std::ostream& stream, const AForm& form)
{
	stream << form.getName() << ", form execution grade : " << form.getExecutionGrade() << ", form signatory grade : " << form.getSignatoryGrade() << ", is signed : " << form.getIsSigned() << "." << std::endl;
	return (stream);
}

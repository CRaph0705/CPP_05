/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:57:57 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/15 17:06:51 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) :  _name("default"), _is_signed(0), _signatory_grade(1), _execution_grade(150)
{
	std::cout << "Form default constructor function called." << std::endl;
}
Form::~Form( void )
{
	std::cout << "Form destructor function called." << std::endl;
}

Form::Form( const Form &cpy) : _name(cpy._name), _signatory_grade(cpy._signatory_grade), _execution_grade(cpy._execution_grade)
{
	std::cout<< "Form copy constructor function called" << std::endl;
	this->_is_signed = cpy._is_signed;
}
Form::Form( std::string name, bool is_signed, int signatory_grade, int execution_grade) : _name(name), _is_signed(is_signed), _signatory_grade(signatory_grade), _execution_grade(execution_grade)
{
	std::cout<< "Form overloaded constructor function called" << std::endl;
	if (_signatory_grade > 150 || execution_grade > 150)
		throw Form::GradeTooLowException();
	if (_signatory_grade < 1 || execution_grade < 1)
		throw Form::GradeTooHighException();
}
Form& Form::operator=( const Form &cpy )
{
	std::cout<< "Form overloaded operator= function called" << std::endl;
	this->_is_signed = cpy._is_signed;
	return (*this);
}


/* ************************************************************************* */
/* GETTERS */

const std::string	Form::getName() const
{
	return (_name);
}

int	Form::getSignatoryGrade() const
{
	return (_signatory_grade);
}

int	Form::getExecutionGrade() const
{
	return (_execution_grade);
}
bool	Form::getIsSigned() const
{
	return (_is_signed);
}


void	Form::beSigned(Bureaucrat &b)
{
	if (_is_signed)
		throw Form::FormAlreadySignedException();
	if (b.getGrade() >= this->getSignatoryGrade())
		throw Form::GradeTooLowException();
	_is_signed = true;
}

std::ostream &operator<<(std::ostream& stream, const Form& form)
{
	stream << form.getName() << ", form execution grade : " << form.getExecutionGrade() << ", form signatory grade : " << form.getSignatoryGrade() << ", is signed : " << form.getIsSigned() << "." << std::endl;
	return (stream);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:57:51 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/14 16:03:02 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int 			_signatory_grade;
		const int 			_execution_grade;
	public:
		Form( void );
		~Form( void );
		Form( const Form &cpy);
		Form( std::string name, bool is_signed, int signatory_grade, int execution_grade);
		Form &operator=( const Form &cpy );

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw() {return "Grade is too high.";};
		} ;

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw() {return "Grade is too low.";};
		} ;

		class FormAlreadySignedException : public std::exception
		{
			const char* what() const throw() {return "Form is already signed";};
		} ;

		const std::string	getName() const;
		int					getSignatoryGrade() const;
		int					getExecutionGrade() const;
		bool				getIsSigned() const;

		void				beSigned(Bureaucrat &b);

} ;

std::ostream &operator<<(std::ostream& stream, const Form& form);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:57:51 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/15 18:02:01 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int 			_signatory_grade;
		const int 			_execution_grade;
	public:
		AForm( void );
		~AForm();
		AForm( const AForm &cpy);
		AForm( std::string name, bool is_signed, int signatory_grade, int execution_grade);
		AForm &operator=( const AForm &cpy );

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw() {return "Grade is too high.";};
		} ;

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw() {return "Grade is too low.";};
		} ;

		class AFormAlreadySignedException : public std::exception
		{
			const char* what() const throw() {return "Form is already signed";};
		} ;

		virtual const std::string	getName() const = 0;
		int					getSignatoryGrade() const;
		int					getExecutionGrade() const;
		bool				getIsSigned() const;

		void				beSigned(Bureaucrat &b);

} ;

std::ostream &operator<<(std::ostream& stream, const AForm& form);

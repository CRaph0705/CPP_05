/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:57:51 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 14:38:38 by rcochran         ###   ########.fr       */
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
		const std::string	_target;
	public:
		AForm( void );
		~AForm();
		AForm( const AForm &cpy);
		AForm( std::string name, bool is_signed, int signatory_grade, int execution_grade, std::string target);
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

		const std::string	getName() const;
		const std::string	getTarget() const;
		int					getSignatoryGrade() const;
		int					getExecutionGrade() const;
		bool				getIsSigned() const;

		void				beSigned(Bureaucrat &b);

		virtual void		execute(Bureaucrat const &executor)const = 0;

} ;

std::ostream &operator<<(std::ostream& stream, const AForm& form);

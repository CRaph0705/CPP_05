/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:33:26 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/14 10:30:11 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	private :
		const std::string 	_name;
		int					_grade;
	public :
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( const Bureaucrat &cpy);
		Bureaucrat( std::string name, int grade );
		Bureaucrat &operator=( const Bureaucrat &cpy );

		const std::string	getName() const;
		int					getGrade() const;
		void				setGrade(int grade);
		void				incrementGrade();
		void				decrementGrade();
	
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw() {return "Grade is too high.";};
	} ;

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw() {return "Grade is too low.";};
	} ;
} ;
std::ostream &operator<<(std::ostream& stream, const Bureaucrat& bureaucrat);

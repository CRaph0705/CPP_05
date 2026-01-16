/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:45:54 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 14:59:18 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm( void );
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &cpy );
		ShrubberyCreationForm( std::string name, bool is_signed, int signatory_grade, int execution_grade );
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &cpy );

		// std::string getName();
		int		CreateFile() const;
		int	PlantTree( std::string filename ) const;
		
		void		execute(Bureaucrat const &executor)const;
} ;
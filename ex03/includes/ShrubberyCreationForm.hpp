/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:45:54 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 15:25:26 by rcochran         ###   ########.fr       */
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
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &cpy );
		
		void execute(Bureaucrat const &executor)const;

		int CreateFile() const;
		int PlantTree( std::string filename ) const;
} ;
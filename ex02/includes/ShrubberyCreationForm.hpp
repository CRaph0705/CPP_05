/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:45:54 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/15 18:16:19 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		//TODO
		// overwrite private parent attributes if needed
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		ShrubberyCreationForm(std::string name, bool is_signed, int signatory_grade, int execution_grade);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
} ;
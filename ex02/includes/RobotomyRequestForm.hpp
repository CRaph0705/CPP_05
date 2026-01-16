/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:47:28 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 16:25:35 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm( void );
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &cpy );
		~RobotomyRequestForm( );
		RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy );
		
		void execute(Bureaucrat const &executor)const;

		void Robotomize() const;
} ;
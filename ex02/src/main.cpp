/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:28:07 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 16:38:38 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	/* DEFAULT CASE */
	Bureaucrat b("pouet", 1);
	std::cout << b << std::endl;

	/* ************************************ ************************************ */
	
	/* ************************** SHRUBBERY FORM TEST ************************** */

	// ShrubberyCreationForm test("toto");
	// Bureaucrat b2("pouet2", 148);
	// b.signForm(test);
	// b2.executeForm(test);
	
	/* ************************** ROBOTOMY FORM TEST  ************************** */
	
	// RobotomyRequestForm robotest("toto");
	// b.signForm(robotest);
	// b.executeForm(robotest);
	
	/* ********************* PRESIDENTIAL PARDON FORM TEST ********************* */


	
	// try
	// {	
	// 	AForm f ("form test", 0, 10, 140);
	// 	std::cout << f << std::endl;
	// 	b.signForm(f);
	// 	b.signForm(f);
	// 	std::cout << f << std::endl;
	// }
	// catch(std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	return (0);
}
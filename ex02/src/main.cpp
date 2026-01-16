/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:28:07 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/16 15:02:00 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	/* DEFAULT CASE */
	Bureaucrat b("toto", 148);
	std::cout << b << std::endl;
	ShrubberyCreationForm test("toto");

	b.executeForm(test);
	
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
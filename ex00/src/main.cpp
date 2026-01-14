/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:28:07 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/14 10:46:09 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	/* DEFAULT CASE */
	Bureaucrat test;
	std::cout << test << std::endl;

	/* *********************************************************** */
	/* BAD CONSTRUCTOR */
	try
	{
		Bureaucrat test("toto", 1000);
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	std::cout << test << std::endl;

	/* *********************************************************** */
	/* GRADE TOO LOW */
	try
	{
		test.setGrade(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	std::cout << test;
	
	try
	{
		test.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	std::cout << test << std::endl;

	/* *********************************************************** */
	/* GRADE TOO HIGH */

	try
	{
		test.setGrade(150);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	std::cout << test;
	
	try
	{
		test.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	std::cout << test << std::endl;
	/* *********************************************************** */

	return (0);
}

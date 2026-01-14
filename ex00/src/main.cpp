/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:28:07 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/14 13:27:15 by rcochran         ###   ########.fr       */
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
		std::cout << test << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}

	/* *********************************************************** */
	/* GRADE TOO LOW */
	try
	{
		test.setGrade(1);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	
	try
	{
		test.incrementGrade();
		std::cout << test << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}

	/* *********************************************************** */
	/* GRADE TOO HIGH */

	try
	{
		test.setGrade(150);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	
	try
	{
		test.decrementGrade();
		std::cout << test << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	/* *********************************************************** */

	return (0);
}

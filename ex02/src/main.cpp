/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:28:07 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/14 15:32:53 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	/* DEFAULT CASE */
	Bureaucrat b("toto", 5);
	std::cout << b << std::endl;

	try
	{	
		Form f ("form test", 0, 10, 140);
		std::cout << f << std::endl;
		b.signForm(f);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
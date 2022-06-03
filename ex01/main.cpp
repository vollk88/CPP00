/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:16:00 by hloki             #+#    #+#             */
/*   Updated: 2022/06/03 23:00:09 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Contact.hpp"
#include "Phonebook.hpp"

int	main ()
{
	std::string command;
	Phonebook phonebook;

	std::cout << "Hey! Welcome to my Phonebook!" << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Please, enter ADD, SEARCH or EXIT: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(1);
		if (command == "ADD")
			phonebook.newContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
			if (command != "EXIT")
				std::cout << RED"Incorrect command!"END << std::endl;
	}
	std::cout << "Exit Phonebook." << std::endl;
	return (0);
}
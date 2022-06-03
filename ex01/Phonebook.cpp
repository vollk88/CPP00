/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:48:18 by hloki             #+#    #+#             */
/*   Updated: 2022/05/28 17:16:00 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
	max = false;
}

Phonebook::~Phonebook() {}

void	Phonebook::newContact()
{
	std::string	s1;

	contacs[index].setIndex(index);
	
	std::cout << "Please, enter First Name: " << std::endl;
	std::getline(std::cin, s1);
	contacs[index].setFirstName(s1);

	std::cout << "Please, enter Last Name: " << std::endl;
	std::getline(std::cin, s1);
	contacs[index].setLastName(s1);

	std::cout << "Please, enter Nickname: " << std::endl;
	std::getline(std::cin, s1);
	contacs[index].setNickName(s1);
	
	std::cout << "Please, enter phone number: " << std::endl;
	std::getline(std::cin, s1);
	contacs[index].setPhoneNumber(s1);

	std::cout << "Please, enter the Darkest Secret: " << std::endl;
	std::getline(std::cin, s1);
	contacs[index].setDarkestSecret(s1);

	std::string	blank = contacs[index].getFirstName() + contacs[index].getLastName() +
		contacs[index].getNickName() + contacs[index].getPhoneNumber() + contacs[index].getDarkestSecret();
	if (blank.empty())
	{
		std::cout << RED"Error: Contact is not saved: Empty input"END << std::endl;
	}
	else
	{
		std::cout << GREEN"New contact is added"END << std::endl;
		if (index < 7)
			index++;
		else
		{
			max = true;
			index = 0;
		}
	}
}

void	Phonebook::searchContact()
{
	std::string number;
	std::string str;
	std::string sep = CYAN"|"END;
	int num;
	str = BLUE"index"END;
	std::cout << CYAN"|-------------------------------------------|"END << std::endl;
	std::cout << sep << " index " << sep << " first name " << sep << " last name " << sep << " nickname " << sep;
	std::cout << std::endl << CYAN"|-------------------------------------------|"END << std::endl;

	int max;
	max = this->max ? 8 : index;
	for (int i = 0; i < max; i++) {
		std::cout << sep << std::setw(10) << contacs[i].getIndex() + 1;
		if (contacs[i].getFirstName().size() > 10)
		    std::cout << sep << std::setw(9) << contacs[i].getFirstName().substr(0, 9) << ".";
		else
		    std::cout << sep << std::setw(10) << contacs[i].getFirstName();
		if (contacs[i].getLastName().size() > 10)
		    std::cout << sep << std::setw(9) << contacs[i].getLastName().substr(0, 9) << ".";
		else
		    std::cout << sep << std::setw(10) << contacs[i].getLastName();
		if (contacs[i].getNickName().size() > 10)
		    std::cout << sep << std::setw(9) << contacs[i].getNickName().substr(0, 9) << ".";
		else
		    std::cout << sep << std::setw(10) << contacs[i].getNickName();
		std::cout << sep << std::endl;
	}
	std::cout << CYAN"|-------------------------------------------|"END << std::endl;
	std::cout << "Enter index of the contact: " << std::endl;
	std::getline(std::cin, number);
	num = atoi(number.c_str());
	if (num < 1 || num > max)
		std::cout << RED"There is no such index. There are " << max << " contacts"END << std::endl;
	else
		this->infoContact(num - 1);
}

void	Phonebook::infoContact(int index) {
    std::cout << "Info about contact " << index + 1 << std::endl;
    std::cout << "First name:     " << contacs[index].getFirstName() << std::endl;
    std::cout << "Last name:      " << contacs[index].getLastName() << std::endl;
    std::cout << "Nickname:       " << contacs[index].getNickName() << std::endl;
    std::cout << "Phone number:   " << contacs[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacs[index].getDarkestSecret() << std::endl;
}
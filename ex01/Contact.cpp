/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:53:16 by hloki             #+#    #+#             */
/*   Updated: 2022/06/03 22:57:48 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(){}
Contact::~Contact(){}
void	Contact::setIndex(int index)
{
	this->index = index;
}

int	Contact::getIndex()
{
	return index;
}

std::string Contact::getFirstName()
{
	return first_name;
}

std::string Contact::getLastName()
{
	return last_name;
}

std::string Contact::getNickName()
{
	return nickname;
}

std::string Contact::getPhoneNumber()
{
	return phone_number;
}

std::string Contact::getDarkestSecret()
{
	return darkest_secret;
}

void	Contact::setFirstName(std::string firstName)
{
	this->first_name = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->last_name = lastName;
}

void	Contact::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
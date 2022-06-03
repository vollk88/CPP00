/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:53:16 by hloki             #+#    #+#             */
/*   Updated: 2022/05/28 16:05:00 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# define RED "\033[38;05;203m"
# define GREEN "\033[38;05;84m"
# define END "\033[0m"
# define CYAN "\033[38;05;158m"
# define BLUE "\033[38;05;81m"
#include <iostream>
#include <string.h>

class Contact 
{
	public:
		Contact();
		~Contact();

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		void setIndex(int index);
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickName(std::string nickname);
		void setPhoneNumber(std::string phone_number);
		void setDarkestSecret(std::string darkest_secret);
		int  getIndex();

	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
#endif
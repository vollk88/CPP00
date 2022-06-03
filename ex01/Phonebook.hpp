/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:45:51 by hloki             #+#    #+#             */
/*   Updated: 2022/05/28 15:28:39 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void	newContact();
		void	searchContact();
		void	infoContact(int index);

	private:
		int		index;
		bool	max;
		Contact	contacs[8];
	
};


#endif

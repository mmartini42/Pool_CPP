#pragma once
//
// Created by mathis martini on 23/08/2022.
//

#ifndef CPP_POOL_PHONEBOOK_H
#define CPP_POOL_PHONEBOOK_H
#include "Contact.hpp"
#include <iostream>

class PhoneBook {
	private:
	Contact contacts[8];

	int		nbContact;
	bool	full;
	void	display_contact_infos(std::string info);
public:
	PhoneBook();

	void	add();
	void	search();
	void	display();
	Contact*	getContact();
	int			geNbContact();
};

std::string	getAwnser(std::string value, bool hasChar, bool hasNumber);
std::string	getAwnser(std::string value, bool hasChar, bool hasNumber, ushort size);

#endif //CPP_POOL_PHONEBOOK_H

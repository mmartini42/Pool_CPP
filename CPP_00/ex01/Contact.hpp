#pragma once
//
// Created by mathis martini on 23/08/2022.
//

#ifndef CPP_POOL_CONTACT_HPP
#define CPP_POOL_CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {

private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	void	displayContact();

	/*Getter*/
	std::string getFistName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getPhoneNumber(void);


	/*Setter*/
	void		setFirstName(std::string firstname);
	void		setLastName(std::string lastname);
	void		setNickName(std::string nickname);
	void		setPhoneNumber(std::string number);
	void		setSecret(std::string secret);
};


#endif //CPP_POOL_CONTACT_HPP

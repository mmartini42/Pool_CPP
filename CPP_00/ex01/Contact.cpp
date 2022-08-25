#include "Contact.hpp"

void	Contact::displayContact()	{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

/*GETTER*/
std::string Contact::getFistName(void) {
	return this->firstName;
}

std::string Contact::getLastName(void) {
	return this->lastName;
}

std::string Contact::getNickName(void) {
	return this->nickName;
}

std::string Contact::getPhoneNumber(void) {
	return this->phoneNumber;
}

/*SETTER*/
void		Contact::setFirstName(std::string firstname) {
	this->firstName = firstname;
}

void		Contact::setLastName(std::string lastname) {
	this->lastName = lastname;
}

void		Contact::setNickName(std::string nickname) {
	this->nickName = nickname;
}

void		Contact::setPhoneNumber(std::string number) {
	this->phoneNumber = number;
}

void		Contact::setSecret(std::string secret) {
	this->darkestSecret = secret;
}
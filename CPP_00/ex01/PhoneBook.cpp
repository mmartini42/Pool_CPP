#include "PhoneBook.hpp"

/* Utils */

static bool	strIsDigit(std::string str) {
	for (size_t i = 0; i < str.size(); i++)
		if (isdigit(str[i]))
			return true;
	return false;
}

static bool strIsAlpha(std::string str) {
	for (size_t i = 0; i < str.size(); i++)
		if (isalpha(str[i]))
			return true;
	return false;
}

static bool	check_entry(std::string value, bool hasChar, bool hasNumber, ushort size) {
	if (value == "None")
		return  true;
	if (!hasChar && strIsAlpha(value)) {
		std::cout << "Entry cannot contains alpha characters\n";
		return (false);
	} if (!hasNumber && strIsDigit(value)) {
		std::cout << "Entry cannot contains digit character\n";
		return (false);
	} if (size != 0 && value.size() != size) {
		std::cout << "Entry must be " << size << " characters long\n";
		return (false);
	}
	return (value != "");
}

std::string	getAwnser(std::string value, bool hasChar, bool hasNumber) {
	return getAwnser(value, hasChar, hasNumber, 0);
}

std::string	getAwnser(std::string value, bool hasChar, bool hasNumber, ushort size) {
	std::string	entry;

	do {
		std::cout << value << ":";
		std::getline(std::cin, entry);
		if (std::cin.eof()) {
			std::cout << "EXIT" << std::endl;
			exit (EXIT_SUCCESS);
		}
	} while (!check_entry(entry, hasChar, hasNumber, size));
	return (entry);
}

/* PhoneBook */
PhoneBook::PhoneBook() : nbContact(0), full(false)
{
}

void	PhoneBook::add() {
	if (nbContact == 8) {
		nbContact = 0;
		full = true;
	}

	Contact* contact = &contacts[nbContact];
	contact->setFirstName(getAwnser("First name", true, false));
	contact->setLastName(getAwnser("Last Name", true, false));
	contact->setNickName(getAwnser("Nick Name", true, true));
	contact->setPhoneNumber(getAwnser("Phone Number", false, true, 10));
	contact->setSecret(getAwnser("Darkest Secret", true, true));
	nbContact++;
}

void	PhoneBook::display_contact_infos(std::string info) {
	std::cout << " " << std::setw(10);
	if (info.size() > 10)
		std::cout << info.substr(0, 9).append(".");
	else
		std::cout << info;
	std::cout << " |";
}

void	PhoneBook::display() {

	std::cout << "|---------------------------------------------------|\n";
	std::cout << "|      Index | First Name |  Last Name |   Nickname |\n";
	std::cout << "|---------------------------------------------------|\n";
	for (int i = 0;i < (this->full ? 8 : this->nbContact); i++)
	{
		Contact contact = contacts[i];

		std::cout << "|";

		std::cout << " " << std::setw(10);
		std::cout << i << " |";

		display_contact_infos(contact.getFistName());
		display_contact_infos(contact.getLastName());
		display_contact_infos(contact.getNickName());

		std::cout << std::endl;
	}
	std::cout << "|---------------------------------------------------|" << std::endl;
}

void	PhoneBook::search() {
	if (nbContact <= 0) {
		std::cout << "You don't have any contact in your phonebook\n";
		return;
	}
	display();
	while (true) {

		int 	id;

		do {
			std::string value = getAwnser("Contact ID", false, true, 0);
			if (value == "None")
				return;

			id = std::atoi(value.c_str());
			if (id < 0 || id >= (this->full ? 8 : this->nbContact)){
				std::cout << "Wrong contact index\n";
				continue;
			}
			contacts[id].displayContact();
		} while (id < 0 || id > nbContact - 1);
	}
}

Contact*	PhoneBook::getContact() {
	return this->contacts;
}

int		PhoneBook::geNbContact() {
	return this->nbContact;
}
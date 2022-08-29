//
// Created by mathis martini on 29/08/2022.
//

#include "Harl.hpp"

Harl::Harl() {
	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";

	function[0] = &Harl::debug;
	function[1] = &Harl::info;
	function[2] = &Harl::warning;
	function[3] = &Harl::error;
}

Harl::~Harl() {
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-special- ketchup burger. I really do !";
	std::cout << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger ! If you did, ";
	std::cout << "I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started working here "
				 "since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	for (size_t i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*function[i])();
}



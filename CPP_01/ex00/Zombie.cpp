//
// Created by mathis martini on 25/08/2022.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << name <<"Im created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << "Is Dead" << std::endl;
}

void Zombie::annonce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
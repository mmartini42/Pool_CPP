//
// Created by mathis martini on 26/08/2022.
//

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name) : _name(name){
}

Zombie::~Zombie() {
	std::cout << _name << "Is Dead" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

std::string Zombie::getName() const {
	return this->_name;
}

void	Zombie::annonce() const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//
// Created by mathis martini on 28/08/2022.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
}

HumanB::~HumanB() {
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &gun) {
	this->_weapon = &gun;
}

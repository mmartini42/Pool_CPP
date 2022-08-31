// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 31/08/2022.
//

#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap;
	ClapTrap copy(clapTrap);

	clapTrap.attack("KIDI");
	clapTrap.takeDamage(7);
	clapTrap.beRepaired(12);

	copy.setAttackDamage(200);
	copy.attack("Jack");
	return (0);
}

// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 31/08/2022.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	std::cout << "- Ex 00 -----------------------------------------\n" << std::endl;
	ClapTrap	unknownClap;
	ClapTrap	bobby("Bobby");

	ClapTrap	timmy("Timmy");
	timmy.setAttackDamage(50);

	std::cout << "Unknown clap: " << unknownClap << std::endl;
	std::cout << "Bobby clap: " << bobby << std::endl;
	std::cout << "Timmy clap: " << timmy << std::endl;

	bobby.attack(timmy.getName());
	timmy.takeDamage(bobby.getAttackDamage());

	timmy.attack(bobby.getName());
	bobby.takeDamage(timmy.getAttackDamage());

	timmy.beRepaired(42);
	timmy.beRepaired(UINT_MAX);

	std::cout << std::endl << "- Ex 01 -----------------------------------------\n" << std::endl;

	ScavTrap	unknownScav;
	ScavTrap	jimmy("Jimmy");

	std::cout << "Unknown scav: " << unknownScav << std::endl;
	std::cout << "Jimmy scav: " << jimmy << std::endl;

	jimmy.guardGate();
	jimmy.attack(bobby.getName());

	unknownScav = jimmy;
	std::cout << "Unknown scav: " << unknownScav << std::endl;

	jimmy.takeDamage(15);

	std::cout << std::endl << "- Ex 02 -----------------------------------------\n" << std::endl;

	FragTrap	unknownFrag;
	FragTrap	harry("Harry");

	std::cout << "Unknown frag: " << unknownFrag << std::endl;
	std::cout << "Harry frag: " << harry << std::endl;

	harry.highFivesGuys();
	harry.attack(bobby.getName());

	unknownFrag = harry;
	std::cout << "Unknown frag: " << unknownFrag << std::endl;

	harry.takeDamage(15);

	std::cout << std::endl << "- Ex 03 -----------------------------------------\n" << std::endl;

	DiamondTrap	unknownDiamond;
	DiamondTrap	lilly("Lilly");

	std::cout << "Unknown diamond: " << unknownDiamond << std::endl;
	std::cout << "Lilly diamond: " << lilly << std::endl;

	lilly.whoAmI();
	lilly.attack(bobby.getName());
	lilly.guardGate();
	lilly.highFivesGuys();

	lilly = unknownDiamond;
	std::cout << "Lilly diamond: " << lilly << std::endl;
	lilly.whoAmI();

	std::cout << std::endl << "-  End  -----------------------------------------\n" << std::endl;

	return (0);
}

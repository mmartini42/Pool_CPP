//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_03_DIAMONDTRAP_HPP
#define CPP_03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const &src );
	virtual ~DiamondTrap();

	using	ScavTrap::attack;
	void	whoAmI();

	std::string 	getName() const;
	void	setName( std::string const& name);

	DiamondTrap	&operator=( DiamondTrap const &f );
};

std::ostream	&operator<<(std::ostream &os, DiamondTrap const &f);


#endif //CPP_03_DIAMONDTRAP_HPP

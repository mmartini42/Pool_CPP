// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 31/08/2022.
//

#ifndef CPP_POOL_SCAVTRAP_HPP
#define CPP_POOL_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap( std::string const name );
	ScavTrap( ScavTrap const &src );
	virtual	~ScavTrap();

	void	guardGate();
	void	attack(const std::string &target);

	ScavTrap	&operator=( ScavTrap const &f);
};


#endif //CPP_POOL_SCAVTRAP_HPP

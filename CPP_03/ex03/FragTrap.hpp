//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_03_FRAGTRAP_HPP
#define CPP_03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap( std::string const name );
	FragTrap( FragTrap const &src );
	virtual ~FragTrap();

	void	highFivesGuys();

	FragTrap	&operator=( FragTrap const &f );
};


#endif //CPP_03_FRAGTRAP_HPP

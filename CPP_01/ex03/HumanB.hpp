//
// Created by mathis martini on 28/08/2022.
//

#ifndef CPP_POOL_HUMANB_HPP
#define CPP_POOL_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon*		_weapon;

public:
	HumanB( std::string name );
	~HumanB();

	void	attack();
	void	setWeapon( Weapon &gun );
};


#endif //CPP_POOL_HUMANB_HPP

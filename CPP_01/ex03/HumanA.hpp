//
// Created by mathis martini on 28/08/2022.
//

#ifndef CPP_POOL_HUMANA_HPP
#define CPP_POOL_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon&		_weapon;

public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA();

	void	attack() const;
	void	setWeapon( Weapon& gun );
};


#endif //CPP_POOL_HUMANA_HPP

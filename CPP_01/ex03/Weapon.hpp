//
// Created by mathis martini on 28/08/2022.
//

#ifndef CPP_POOL_WEAPON_HPP
#define CPP_POOL_WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon {
private:
	std::string	_type;

public:
	Weapon( std::string type );
	~Weapon();

	std::string const &getType() const;
	void	setType( std::string type );
};


#endif //CPP_POOL_WEAPON_HPP

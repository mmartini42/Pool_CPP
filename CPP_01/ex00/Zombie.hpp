//
// Created by mathis martini on 25/08/2022.
//

#ifndef CPP_POOL_ZOMBIE_HPP
#define CPP_POOL_ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
private:
	std::string	_name;
public:
	Zombie(std::string);
	~Zombie();

	void annonce();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif //CPP_POOL_ZOMBIE_HPP

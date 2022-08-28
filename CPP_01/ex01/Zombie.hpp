//
// Created by mathis martini on 26/08/2022.
//

#ifndef CPP_POOL_ZOMBIE_HPP
#define CPP_POOL_ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
private:
	std::string	_name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void		setName(std::string name);
	std::string	getName() const;

	void	annonce() const;
};

Zombie*	zombieHorde( int N, std::string name );

#endif //CPP_POOL_ZOMBIE_HPP

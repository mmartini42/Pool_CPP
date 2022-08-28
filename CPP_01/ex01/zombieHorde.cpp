//
// Created by mathis martini on 28/08/2022.
//

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}

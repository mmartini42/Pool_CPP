//
// Created by mathis martini on 28/08/2022.
//

#include "Zombie.hpp"

int	main(void) {
	Zombie* Horde = zombieHorde(10, "Cevenne");

	for ( int i = 0; i < 10; i++)
		Horde->annonce();

	delete [] Horde;

	return (0);
}
#include "Zombie.hpp"

void	randomChump( std::string name ) {
	Zombie* couscous = newZombie(name);
	std::cout << "Hello I'm " << name << std::endl;
	delete (couscous);
}
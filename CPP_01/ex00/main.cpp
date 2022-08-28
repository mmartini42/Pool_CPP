#include "Zombie.hpp"

int main(){
	randomChump("Ztest");

	Zombie* test = newZombie("Jack");
	Zombie*	test2 = newZombie("Sparrow");

	test->annonce();
	test2->annonce();

	delete(test);
	delete(test2);
}
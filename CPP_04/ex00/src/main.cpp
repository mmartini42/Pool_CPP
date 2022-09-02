// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {

	const Animal*	meta = new Animal();
	const Animal*	chat = new Cat();
	const Animal*	chien = new Dog("cevenne");

	std::cout << chat->getType() << " " << std::endl;
	std::cout << chien->getType() << "that's their name" << std::endl;

	chat->makeSound();
	chien->makeSound();
	meta->makeSound();

	delete meta;
	delete chat;
	delete chien;

	std::cout << "\n-----------------------------------\n" << std::endl;

	const WrongAnimal*	wrong = new WrongAnimal();
	const WrongAnimal*	cat = new WrongCat();

	std::cout << wrong->getWrongType() << " " << std::endl;
	std::cout << cat->getWrongType() << " cat " << std::endl;

	wrong->makeSound();
	cat->makeSound();

	delete wrong;
	delete cat;

	return 0;
}

// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 31/08/2022.
//

#ifndef CPP_POOL_CLAPTRAP_HPP
#define CPP_POOL_CLAPTRAP_HPP

#include <iomanip>
#include <iostream>
#include <cstdlib>

class ClapTrap {
protected:
	std::string	_name;
	uint32_t	_hitPoints;
	uint32_t	_energyPoints;
	uint32_t	_attackDamage;

public:
	ClapTrap();
	ClapTrap( ClapTrap const &src );
	ClapTrap( std::string const name );
	virtual ~ClapTrap();

	void	setName( const std::string& name );
	void	setHitPoints( uint32_t hitPoint );
	void	setEnergyPoints( uint32_t energy );
	void	setAttackDamage( uint32_t damage );

	std::string	getName() const ;
	uint32_t	getHitPoints() const;
	uint32_t	getEnergyPoints() const;
	uint32_t	getAttackDamage() const;

	void	attack( std::string const &target );
	void	takeDamage( uint32_t amount );
	void	beRepaired( uint32_t amount );

	ClapTrap	&operator=( ClapTrap const &f );
};

std::ostream	&operator<<(std::ostream &os, ClapTrap const &clap);

#endif //CPP_POOL_CLAPTRAP_HPP

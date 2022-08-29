//
// Created by mathis martini on 29/08/2022.
//

#ifndef CPP_POOL_HARL_HPP
#define CPP_POOL_HARL_HPP

#include <iomanip>
#include <fstream>
#include <iostream>

class Harl {
private:
	std::string	levels[4];
	void	(Harl::*function[4])(void);

	void	debug( void );
	void	info ( void );
	void	warning( void );
	void	error( void );

public:
	Harl(void);
	~Harl();

	void	complain( std::string level );
};


#endif //CPP_POOL_HARL_HPP

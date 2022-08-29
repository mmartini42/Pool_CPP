//
// Created by mathis martini on 29/08/2022.
//

#include "Harl.hpp"

int	main() {
	Harl	harl;

	harl.complain("error");
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("test");
	return 0;
}
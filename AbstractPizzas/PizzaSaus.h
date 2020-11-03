#pragma once

#include <string>

class PizzaSaus {

private:
	std::string saus;

public:
	PizzaSaus() {};
	PizzaSaus(std::string setSaus) {
		saus = setSaus;
	}

	~PizzaSaus() {};

	void Print(void) {
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "The pizza saus is:" << std::endl;
    	std::cout << saus << std::endl;
		std::cout << "-------------------------------------" << std::endl;
	}

};
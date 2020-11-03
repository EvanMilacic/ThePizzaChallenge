#pragma once
#pragma once

#include <string>
#include <iostream>

class ingredient {

	std::string Name;
public:

	ingredient() {};
	ingredient(std::string name_in) {
		Name = name_in;
	};
	~ingredient() {};

	virtual void PrintName(void) {
		std::cout << Name << std::endl;
	}

};
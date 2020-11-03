#pragma once

#include<iostream>
#include <string>

class PizzaTopping {

protected:
	std::string name;

public:
	PizzaTopping() {};
	PizzaTopping(std::string setName) {
			name = setName;
	};

	~PizzaTopping() {
	};

	virtual void PrintName(void) {
			std::cout << name << std::endl;
	}
};
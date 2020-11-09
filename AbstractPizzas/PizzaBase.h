#pragma once

#include <string>
#include <vector>
#include "ingredients.h"

class PizzaBase {
protected:
	std::string Base;
	std::vector<ingredient> IngredientsList;
public:

	PizzaBase() {};
	~PizzaBase() {};

	virtual void PrintBase(void) {
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "The pizza base is:" << std::endl;
	    std::cout << Base << std::endl;
		std::cout << "-------------------------------------" << std::endl;
	}

	virtual void PrintIngredients(void) {
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "The ingredients in the base are:" << std::endl;
		int len = IngredientsList.size();
		for (int index = 0; index < len; ++index) {
			IngredientsList[index].PrintName();
		}
		std::cout << "-------------------------------------" << std::endl;
	}
};
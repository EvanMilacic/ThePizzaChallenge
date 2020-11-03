#pragma once

#include "PizzaBase.h"

class RomanBase : public PizzaBase {

public:
	RomanBase() {
		Base = "Roman Base";
		IngredientsList.resize(4);
		IngredientsList[0] = ingredient("WheatFlour");
		IngredientsList[1] = ingredient("Bread Yeast");
		IngredientsList[2] = ingredient("Salt");
		IngredientsList[3] = ingredient("Water");
	};
	~RomanBase() {};
};
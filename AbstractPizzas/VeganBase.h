#pragma once

#include "PizzaBase.h"

class VeganBase: public PizzaBase{

public:
	VeganBase() {
		Base = "Vegan Base";
		IngredientsList.resize(3);
		IngredientsList[0] = ingredient("Coliflower");
		IngredientsList[1] = ingredient("Linseed");
		IngredientsList[2] = ingredient("Chickpeas");
	};
	~VeganBase() {};


};
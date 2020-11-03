#pragma once

#include "PizzaBase.h"

class NapolitanBase : public PizzaBase {

public:
	NapolitanBase() {
		Base = "Napolitan Base";
		IngredientsList.resize(6);
		IngredientsList[0] = ingredient("WheatFlour");
		IngredientsList[1] = ingredient("Bread Yeast");
		IngredientsList[2] = ingredient("SemolinaFlour");
		IngredientsList[3] = ingredient("Salt");
		IngredientsList[4] = ingredient("Sugar");
		IngredientsList[5] = ingredient("Water");
	};
	~NapolitanBase() {};
};
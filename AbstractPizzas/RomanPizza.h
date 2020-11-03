#pragma once
#include "AbstractPizza.h"
#include "PizzaTypes.h"
#include "RomanBase.h"
#include "PizzaSaus.h"
#include "FreshToppings.h"


class RomanPizza :
	public AbstractPizza
{
public:
	RomanPizza(PizzaTypes type) {
		Toppings = type.Toppings;
		FreshToppings = type.FreshToppings;
	};

	void MakePizza() {
		MakeBase(RomanBase());
		MakeSaus(PizzaSaus("Crushed Fresh Tomatoes"));

		BakeSetting = OvenSettings(320);
		BakeSetting.SetHeight(1);
		BakeSetting.SetOvenTime(6);
		BakeSetting.SetProgram("Convection");
		Bake(BakeSetting);

		PrintPizza();
	}
};


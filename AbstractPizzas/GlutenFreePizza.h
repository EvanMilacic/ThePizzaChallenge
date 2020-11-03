#pragma once
#include "AbstractPizza.h"
#include "PizzaTypes.h"
#include "VeganBase.h"
#include "PizzaSaus.h"
#include "FreshToppings.h"


class GlutenFreePizza :
	public AbstractPizza
{
public:
	GlutenFreePizza(PizzaTypes type) {
		Toppings = type.Toppings;
		FreshToppings = type.FreshToppings;
	};

	void MakePizza() {
		MakeBase(VeganBase());
		MakeSaus(PizzaSaus("Ketchup"));

		BakeSetting = OvenSettings(180);
		BakeSetting.SetHeight(9);
		BakeSetting.SetOvenTime(45);
		BakeSetting.SetProgram("Bottom Heat");
		Bake(BakeSetting);

		PrintPizza();
	}
};
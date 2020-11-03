#pragma once
#include "AbstractPizza.h"
#include "PizzaTypes.h"
#include "NapolitanBase.h"
#include "PizzaSaus.h"
#include "FreshToppings.h"

class NapolitanPizza :
	public AbstractPizza
{
public:

	NapolitanPizza(PizzaTypes type) {
		Toppings = type.Toppings;
		FreshToppings = type.FreshToppings;
	};

	void MakePizza() {
		MakeBase(NapolitanBase());
		MakeSaus(PizzaSaus("Cooked Tomato saus with garlic"));

		BakeSetting = OvenSettings(320);
		BakeSetting.SetHeight(1);
		BakeSetting.SetOvenTime(6);
		BakeSetting.SetProgram("Convection");
		Bake(BakeSetting);

		PrintPizza();
	}

};


#pragma once

#include <vector>
#include <string>
#include "PizzaToppings.h"
#include "FreshToppings.h"

class PizzaTypes {

public:
	std::string name;
	std::vector<PizzaTopping> Toppings;
	std::vector<FreshTopping> FreshToppings;
};

class Margarita : public PizzaTypes {
public:
	Margarita() {
		name = "Margarita";
		Toppings = { PizzaTopping("Mozarella") };
		FreshToppings = { FreshTopping("Basil") };
	}
};

class Funghi : public PizzaTypes {
public:
	Funghi() {
		name = "Funghi";
		Toppings = { PizzaTopping("Mozarella"), PizzaTopping("Muchrooms")};
	}
};

class Pepperoni : public PizzaTypes {
public:
	Pepperoni() {
		name = "Pepperoni";
		Toppings = { PizzaTopping("Mozarella"), PizzaTopping("Pepperoni") };
	}
};

class Supreme : public PizzaTypes {
public:
	Supreme() {
		name = "Supreme";
		Toppings = { PizzaTopping("Mozarella"), PizzaTopping("Bacon"), PizzaTopping("onion"),
					 PizzaTopping("Pepperoni"), PizzaTopping("Mushrooms"), PizzaTopping("Olives") };
	}
};

class PrawnChilli : public PizzaTypes {
public:
	PrawnChilli() {
		name = "PrawnChilli";
		Toppings = { PizzaTopping("Mozarella"), PizzaTopping("Garlic"), PizzaTopping("Onion"),
					 PizzaTopping("Prawns"), PizzaTopping("Chilli")};
	}
};

class Prosciutto : public PizzaTypes {
public:
	Prosciutto() {
		name = "Prosciutto";
		Toppings = { PizzaTopping("Mozarella"), PizzaTopping("Prosciutto") };
		FreshToppings = { FreshTopping("Rocket"), FreshTopping("Extra Virgin Olive Oil")};
		}
	};

#pragma once

#include <vector>
#include <string>
#include "PizzaBase.h"
#include "PizzaSaus.h"
#include "PizzaToppings.h"
#include "FreshToppings.h"
#include "OvenSettings.h"
#include "PizzaTypes.h"


class AbstractPizza
{
protected:
	std::string name;
	std::string comment;
	PizzaBase Base;
	PizzaSaus Saus;
	std::vector<PizzaTopping> Toppings;
	OvenSettings BakeSetting;
	std::vector<FreshTopping> FreshToppings;

public:
	AbstractPizza() {};
	AbstractPizza(PizzaTypes type) {
		Toppings = type.Toppings;
		FreshToppings = type.FreshToppings;
	};
	~AbstractPizza() {};
	void virtual MakePizza() {
		std::cout << "This has no implementation." << std::endl;
	}

	virtual void SetName(std::string set_name) {
		this->name = set_name;
	}

	virtual void SetComment(std::string set_comment) {
		this->comment = set_comment;
	}


protected:

	virtual void MakeBase(PizzaBase setBase) {
		Base = setBase;
	}
	virtual void MakeSaus(PizzaSaus setSaus) {
		Saus = setSaus;
	}
	virtual void AddTopping(PizzaTopping setToppings) {
		Toppings.push_back(setToppings);
	};

	virtual void SetToppings(std::vector<PizzaTopping> setToppings) {
		Toppings = setToppings;
	}

	virtual void Bake(OvenSettings setBakeSetting) {
		BakeSetting = setBakeSetting;
	}
	virtual void AddFreshToppings(FreshTopping setFreshToppings) {
		FreshToppings.push_back(setFreshToppings);
	}

	virtual void SetFreshToppings(std::vector<FreshTopping> setFreshToppings) {
		FreshToppings = setFreshToppings;
	}

	virtual void PrintPizza(void) {

		PrintHeader();

		Base.PrintBase();
		Base.PrintIngredients();

		Saus.Print();

		PrintToppings();

		BakeSetting.Print();

		PrintFreshToppings();
	}

private:
	void PrintHeader(void) {
		std::cout << "=====================================================" << std::endl;
		std::cout << "This is a " << name << " pizza." << std::endl;
		std::cout << comment << std::endl;
		std::cout << "=====================================================" << std::endl;
	}

	void PrintToppings(void) {
		std::cout << "Toppings on this pizza are:" << std::endl;
		PrintList(Toppings);
	}

	void PrintFreshToppings(void) {
		std::cout << "Fresh toppings on this pizza are:" << std::endl;
		PrintList(Toppings);
	}

	void PrintList(std::vector<PizzaTopping> List) {
		size_t len = List.size();
		for (size_t n = 0; n < len; ++n) {
			List[n].PrintName();
		}
	}
};


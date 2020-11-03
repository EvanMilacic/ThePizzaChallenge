#pragma once
#include "AbstractPizza.h"

class AbstractFactory
{
public:
	virtual AbstractPizza* CalzonePizza(PizzaTypes type) = 0;
	virtual AbstractPizza* TakeAway(PizzaTypes type) = 0;
	virtual AbstractPizza* ToShare(PizzaTypes type) = 0;

};


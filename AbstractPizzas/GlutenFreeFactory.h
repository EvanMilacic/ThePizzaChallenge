#pragma once
#include "AbstractFactory.h"
#include "GlutenFreePizza.h"

class GlutenFreeFactory :
    public AbstractFactory
{

    AbstractPizza* CalzonePizza(PizzaTypes type) {
        AbstractPizza* pizza = new GlutenFreePizza(type);
        pizza->SetName(type.name);
        pizza->SetComment("This will be a mess, and you know it.\n Why didn't you just order rattatouille?");
        return pizza;
    };

    AbstractPizza* TakeAway(PizzaTypes type) {
        AbstractPizza* pizza = new GlutenFreePizza(type);
        pizza->SetName(type.name);
        pizza->SetComment("Enjoy in the comfort of your own home.");
        return pizza;
    };

    AbstractPizza* ToShare(PizzaTypes type) {
        AbstractPizza* pizza = new GlutenFreePizza(type);
        pizza->SetName(type.name);
        pizza->SetComment("You mean to say there is more people like you?");
        return pizza;
    };

};
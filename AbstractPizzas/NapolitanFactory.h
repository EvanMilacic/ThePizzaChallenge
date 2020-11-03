#pragma once
#include "AbstractFactory.h"
#include "NapolitanPizza.h"

class NapolitanFactory :
    public AbstractFactory
{

    AbstractPizza* CalzonePizza(PizzaTypes type) {
        AbstractPizza* pizza = new NapolitanPizza(type);
        pizza->SetName(type.name);
        pizza->SetComment("This Pizza is folded in half.");
        return pizza;
    };

    AbstractPizza* TakeAway(PizzaTypes type) {
        AbstractPizza* pizza = new NapolitanPizza(type);
        pizza->SetName(type.name);
        pizza->SetComment("It is cut in eight pieces, but you can not eat this here.");
        return pizza;
    };

    AbstractPizza* ToShare(PizzaTypes type) {
        AbstractPizza* pizza = new NapolitanPizza(type);
        pizza->SetName(type.name);
        pizza->SetComment("It is cut in eight pieces, how nice of you to share.");
        return pizza;
    };

};
#pragma once
#include <string>
#include "PizzaToppings.h"

class FreshTopping :
    public PizzaTopping
{
public:
    FreshTopping(std::string setName) {
        name = setName;
    };
};

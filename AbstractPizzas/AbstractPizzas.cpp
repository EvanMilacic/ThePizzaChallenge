// AbstractPizzas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AbstractFactory.h"
#include "RomanFactory.h"
#include "NapolitanFactory.h"
#include "AbstractPizza.h"
#include "GlutenFreeFactory.h"
#include "PizzaTypes.h"

int main()
{
	AbstractFactory* Tim = new RomanFactory();
	AbstractFactory* Dario = new NapolitanFactory();
	AbstractFactory* Evan = new GlutenFreeFactory();

	/* Tim has perfected the normal/Roman type pizza*/
	//Morteza would like a "normal" pizza margarita to share
	AbstractPizza* Pizza_for_Morteza = Tim->ToShare(Margarita());
	Pizza_for_Morteza->MakePizza();
	//Juan would like a supreme calzone
	AbstractPizza* Pizza_for_Juan = Tim->CalzonePizza(Supreme());
	Pizza_for_Juan->MakePizza();

	/* South italian being purists only let Dario make them pizzas */
	//Francesco would like to eat a procuitto pizza at home with his girlfriend
	AbstractPizza* Pizza_for_Francesco = Dario->TakeAway(Prosciutto());
	Pizza_for_Francesco->MakePizza();
	//Alessandro has a more refined pallate and likes to share a sea fruits pizza with Kelly
	AbstractPizza* Pizza_for_Alessandro = Dario->ToShare(PrawnChilli());
	Pizza_for_Alessandro->MakePizza();

	/* And then there is Evan that also caters to people that are intestinally challenged*/
	//David want a Calzone Funghi
	AbstractPizza* Pizza_for_David = Evan->CalzonePizza(Funghi());
	Pizza_for_David->MakePizza();
	//Maike would like a classical Pepperoni and eats at home
	AbstractPizza* Pizza_for_Maike = Evan->TakeAway(Pepperoni());
	Pizza_for_Maike->MakePizza();
	//And then an unknown persone walks by and orders a supreme to share
	AbstractPizza* Pizza_for_Stranger = Evan->ToShare(Supreme());
	Pizza_for_Stranger->MakePizza();
}
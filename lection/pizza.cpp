#include "pizza.h"

Pizza::Pizza(string name) : Dish(name) {}

string Pizza::getName()
{
	return "Pizza \"" + name + "\"";
}

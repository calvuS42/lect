#include "Dish.h"

Dish::Dish(string name) : name(name) {
	this->name = name;
}

string Dish::getName()
{
	return name;
}

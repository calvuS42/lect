#include "Pasta.h"



Pasta::Pasta(string name) : Dish (name)
{
}

string Pasta::getName()
{
	return "Pasta \"" + name + "\"";
}

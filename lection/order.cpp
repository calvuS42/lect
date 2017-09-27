#include "order.h"



void order::addItem(Dish * item)
{
	dishes.push_back(item);
}

void order::operator +=(Dish * item)
{
	addItem(item);
}

order::order()
{
}

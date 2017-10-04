#include "order.h"



void order::addItem(Dish * item)
{
	dishes.push_back(item);
}

void order::operator +=(Dish * item)
{
	addItem(item);
}

void order::print()
{
	cout <<"order for table" <<  tableId << endl;
}

order::order(int tableId)
{
	this->tableId = tableId;
}

ostream & operator<<(ostream & stream, order order)
{
	stream << "Order for table " << order.tableId << endl;
	for (auto dish : order.dishes)
		stream << "\t" << dish->getName() << "\n";
	return stream;
}

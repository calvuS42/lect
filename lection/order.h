#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Dish.h"

using namespace std;

class order
{
public:

	void addItem(Dish *item);
	void operator +=(Dish *item);
	void print();

	friend ostream& operator << (ostream& stream, order order);

	order(int tableId);
private:
	vector <Dish *> dishes;
	int tableId;
};


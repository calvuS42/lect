#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Dish.h"

using namespace std;

class order
{
public:
	vector <Dish *> dishes;
	int tableId;
	void addItem(Dish *item);
	void operator +=(Dish *item);
	void print();
	order(int tableId);
};


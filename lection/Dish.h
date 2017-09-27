#pragma once
#include <string>
#include <iostream>

using namespace std;

class Dish
{
public:
	Dish(string name);
	virtual string getName();
protected:
	int cookingTime;
	string name;
};


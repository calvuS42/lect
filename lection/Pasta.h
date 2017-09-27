#pragma once
#include <string>
#include <iostream>
#include "Dish.h"
using namespace std;

class Pasta : public Dish
{
public:
	Pasta(string name);
	string getName() override;
};


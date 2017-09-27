#pragma once
#include <string>
#include <iostream>
#include "Dish.h"
using namespace std;

class Soup : public Dish
{
public:
	Soup(string name);
	string getName() override;
};


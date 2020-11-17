#pragma once
#include "Animal.h"
class Dolphin : Animal
{
public:
	std::string origin;
	Dolphin(std::string n, int a, std::string o);
	void Description();
};


#pragma once
#include"Animal.h"
class Zebra : Animal
{
public:
	std::string origin;
	Zebra(std::string n, int a, std::string o);
	void Description();
};


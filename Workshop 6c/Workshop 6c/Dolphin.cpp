#include "Dolphin.h"
#include <iostream>
Dolphin::Dolphin(std::string n, int a, std::string o)
{
	name = n;
	age = a;
	origin = o;
}
void Dolphin::Description()
{
	printf("Animal %s came from %s and is age %i", name, origin, age);
}
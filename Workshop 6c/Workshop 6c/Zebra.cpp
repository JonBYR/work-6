#include "Zebra.h"
#include <iostream>
Zebra :: Zebra(std::string n, int a, std::string o) 
{
	name = n;
	age = a;
	origin = o;
}
void Zebra::Description() 
{
	printf("Animal %s came from %s and is age %i", name, origin, age);
}
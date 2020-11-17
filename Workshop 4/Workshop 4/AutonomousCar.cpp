#include "AutonomousCar.h"
#include <string>
#include <iostream>

AutonomousCar::AutonomousCar(std::string name)
{
	Name = name; //constructor
}
void AutonomousCar:: Drive(int distance, int orientation) 
{
	std::cout << Name << " has driven " << distance << " metres with " << orientation << " degrees";
}
void AutonomousCar::TurnOnSpot(int angle)//overwrited method of the TurnOnSpot class from the parent
{
	std::cout << "Not possible for this kind of vehcile";
}

#pragma once
#include "Robot.h" //inherited class needs the header file from the parent class
#include <string>
class AutonomousCar : Robot //inherits from robot
{
public:
	std::string Name;
	AutonomousCar(std::string name);
	void Drive(int distance, int orientation);
	void TurnOnSpot(int angle); //inherite methods that need to be used must also be included in the header file
};


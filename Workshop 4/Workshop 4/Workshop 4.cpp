// Workshop 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Robot.h"; //classes need to have header file included
#include "AutonomousCar.h"
using namespace std;
int main()
{
	cout << "Give the distance and angle for your robot";
	int angle;
	int distance;
	cin >> distance >> angle;
	Robot robo; //object created
	AutonomousCar Toyota("Toyota Arius"); //costructor
	robo.Forward(distance); //method of object called
	robo.TurnOnSpot(angle); //different TurnOnSpot methods in the different inherited classes
	Toyota.Drive(distance, angle);
	Toyota.TurnOnSpot(angle);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include "Robot.h"
#include <iostream>
void Robot :: TurnOnSpot(int angle) //method will check if the angle is not any of these angles
{
	if ((angle != 0) && angle != 90 && angle != 180 && angle != 270 && angle != 360) 
	{
		std::cout << "Does not compute";
	}
	else 
	{
		std::cout << "Robot has turned: " << angle << "degrees" << std::endl;;
	}
}
void Robot :: Forward(int distance) //function will inform user it has moved 
{
	std::cout << "Robot has moved: " << distance << "metres" << std::endl;
}
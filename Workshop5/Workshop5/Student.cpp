#include "Student.h"
#include <string>
#include <vector>
#include <iostream>
void Student :: input(int score1, int score2, int score3, int score4, int score5) 
{
	scores.push_back(score1);
	scores.push_back(score2);
	scores.push_back(score3);
	scores.push_back(score4);
	scores.push_back(score5);
	std::cout << calculateTotalScore(scores);
}
int Student :: calculateTotalScore(std::vector<int> scoreVector) 
{
	int total = 0;
	for (int i = 0; i < scoreVector.size(); i++) 
	{
		total += scoreVector[i];
	}
	return total;
}
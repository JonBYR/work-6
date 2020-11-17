#pragma once
#include <string>
#include <vector>
class Student
{
public:
	std::string name;
	std::vector<int> scores;
	void input(int score1, int score2, int score3, int score4, int score5);
	int calculateTotalScore(std::vector<int> scoreVector);
};


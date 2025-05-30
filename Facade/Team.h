#pragma once
#include <random>
#include <string>
#include <iostream>

class Team {
public:
	std::string _team;
	Team(std::string team);
	float Chance_to_Win(int love_to_team, float power_of_show);
};
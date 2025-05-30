#pragma once
#include "Team.h"
#include "Repetition.h"
#include "Fans.h"

class KVN
{
private:
	int _repetition;
	std::string _team;
	int _fans;
public:
	KVN(std::string team, int repetition, int fans);
	void Prediction_to_Game();
};

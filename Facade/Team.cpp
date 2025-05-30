#include "Team.h"

Team::Team(std::string team) {
	std::cout << "Команда: " << team << std::endl;
	_team = team;
}

float Team::Chance_to_Win(int love_to_team, float power_of_show) {
	int power_of_name = rand() % 100; // Известность команды
	float chance_to_win = (love_to_team % 100 + (int) power_of_show % 100 + power_of_name) / 3; // Вероятность победы команды в %
	return chance_to_win;
}

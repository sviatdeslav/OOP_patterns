#include "Repetition.h"

Repetition::Repetition(int repetition) {
	std::cout << "Количество проведённых репетиций: " << repetition << std::endl;
	_repetition = repetition;
}

float Repetition::Power_of_Show() {
	float power = 5 * rand() % _repetition; // Любовь зрителей к команде
	return power;
}
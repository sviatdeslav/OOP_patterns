#include "Repetition.h"

Repetition::Repetition(int repetition) {
	std::cout << "���������� ���������� ���������: " << repetition << std::endl;
	_repetition = repetition;
}

float Repetition::Power_of_Show() {
	float power = 5 * rand() % _repetition; // ������ �������� � �������
	return power;
}
#include "Fans.h"

Fans::Fans(int fans) {
	std::cout << "���������� �����������: " << fans << std::endl;
	_fans = fans;
}

int Fans::Love_to_Team() {
	int love = 4 * rand() % _fans; // ������ �������� � �������
	return love;
}
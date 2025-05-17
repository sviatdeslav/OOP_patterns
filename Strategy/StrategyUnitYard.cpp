#include "StrategyUnitYard.h"

StrategyUnitYard::StrategyUnitYard()
{
	std::cout << std::endl;
	std::cout << "����������� ��������� �������� �� ������ � ����" << std::endl;
}

StrategyUnitYard::~StrategyUnitYard() {
	std::cout << std::endl;
	std::cout << "���������� ���������� � ����" << std::endl;
}

void StrategyUnitYard::changeUnit(std::vector<std::unique_ptr<float>>& data)
{
	std::cout << std::endl;
	std::cout << "������� �� ������ � ����: " << std::endl;
	std::cout << std::endl;
	for (auto& ptr : data) {
		std::cout << "� ������: " << *ptr << " � �����: ";
		if (ptr) {
			*ptr = *ptr / 0.9144;
		}
		std::cout << *ptr << std::endl;
	}
}
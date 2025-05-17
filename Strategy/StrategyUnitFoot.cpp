#include "StrategyUnitFoot.h"

StrategyUnitFoot::StrategyUnitFoot()
{
	std::cout << std::endl;
	std::cout << "����������� ��������� �������� �� ������ � ����" << std::endl;
}

StrategyUnitFoot::~StrategyUnitFoot() {
	std::cout << std::endl;
	std::cout << "���������� ���������� � ����" << std::endl;
}

void StrategyUnitFoot::changeUnit(std::vector<std::unique_ptr<float>>& data)
{
	std::cout << std::endl;
	std::cout << "������� �� ������ � ����: " << std::endl;
	std::cout << std::endl;
	for (auto& ptr : data) {
		std::cout << "� ������: " << *ptr << " � �����: ";
		if (ptr) {
			*ptr = *ptr / 0.3048;
		}
		std::cout << *ptr << std::endl;
	}
}
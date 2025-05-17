#include "StrategyUnitFoot.h"

StrategyUnitFoot::StrategyUnitFoot()
{
	std::cout << std::endl;
	std::cout << "Конструктор стратегии перевода из метров в ярды" << std::endl;
}

StrategyUnitFoot::~StrategyUnitFoot() {
	std::cout << std::endl;
	std::cout << "Деструктор конвертора в футы" << std::endl;
}

void StrategyUnitFoot::changeUnit(std::vector<std::unique_ptr<float>>& data)
{
	std::cout << std::endl;
	std::cout << "Перевод из метров в футы: " << std::endl;
	std::cout << std::endl;
	for (auto& ptr : data) {
		std::cout << "В метрах: " << *ptr << " В футах: ";
		if (ptr) {
			*ptr = *ptr / 0.3048;
		}
		std::cout << *ptr << std::endl;
	}
}

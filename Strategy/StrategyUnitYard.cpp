#include "StrategyUnitYard.h"

StrategyUnitYard::StrategyUnitYard()
{
	std::cout << std::endl;
	std::cout << "Конструктор стратегии перевода из метров в ярды" << std::endl;
}

StrategyUnitYard::~StrategyUnitYard() {
	std::cout << std::endl;
	std::cout << "Деструктор конвертора в ярды" << std::endl;
}

void StrategyUnitYard::changeUnit(std::vector<std::unique_ptr<float>>& data)
{
	std::cout << std::endl;
	std::cout << "Перевод из метров в ярды: " << std::endl;
	std::cout << std::endl;
	for (auto& ptr : data) {
		std::cout << "В метрах: " << *ptr << " В ярдах: ";
		if (ptr) {
			*ptr = *ptr / 0.9144;
		}
		std::cout << *ptr << std::endl;
	}
}

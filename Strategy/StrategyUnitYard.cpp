#include "StrategyUnitYard.h"

StrategyUnitYard::StrategyUnitYard()
{
	std::cout << std::endl;
	std::cout << " онструктор стратегии перевода из метров в €рды" << std::endl;
}

StrategyUnitYard::~StrategyUnitYard() {
	std::cout << std::endl;
	std::cout << "ƒеструктор конвертора в €рды" << std::endl;
}

void StrategyUnitYard::changeUnit(std::vector<std::unique_ptr<float>>& data)
{
	std::cout << std::endl;
	std::cout << "ѕеревод из метров в €рды: " << std::endl;
	std::cout << std::endl;
	for (auto& ptr : data) {
		std::cout << "¬ метрах: " << *ptr << " ¬ €рдах: ";
		if (ptr) {
			*ptr = *ptr / 0.9144;
		}
		std::cout << *ptr << std::endl;
	}
}
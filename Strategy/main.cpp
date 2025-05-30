﻿#include <iostream>
#include "StrategyUnitYard.h"
#include "StrategyUnitFoot.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    // Перевод метров в ярды
    std::shared_ptr<StrategyUnitYard> conv = std::make_shared<StrategyUnitYard>();
    std::vector<std::unique_ptr<float>> data;
    // Заполнение data
    for (int i = 0; i < 10; ++i) {
        data.push_back(std::make_unique<float>(i * 1.0f));
    }
    conv->changeUnit(data);

    // Перевод метров в футы
    std::shared_ptr<StrategyUnitFoot> conv1 = std::make_shared<StrategyUnitFoot>();
    std::vector<std::unique_ptr<float>> data1;
    // Заполнение data1
    for (int i = 0; i < 10; ++i) {
        data1.push_back(std::make_unique<float>(i * 1.0f));
    }
    conv1->changeUnit(data1);
}

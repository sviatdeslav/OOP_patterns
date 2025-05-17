#pragma once
#include <iostream>
#include <vector>

// Стратегия перевода данных в другую систему
class StrategyUnit
{
public:
    virtual ~StrategyUnit() = default;
    virtual void changeUnit(std::vector<std::unique_ptr<float>>& data) = 0;
};

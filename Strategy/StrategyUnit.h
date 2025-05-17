#pragma once
#include <iostream>
#include <vector>

// ��������� �������� ������ � ������ �������
class StrategyUnit
{
public:
    virtual ~StrategyUnit() = default;
    virtual void changeUnit(std::vector<std::unique_ptr<float>>& data) = 0;
};
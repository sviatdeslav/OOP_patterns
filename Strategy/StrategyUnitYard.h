#pragma once
#include "StrategyUnit.h"

class StrategyUnitYard : public StrategyUnit
{
public:
	StrategyUnitYard();
	~StrategyUnitYard();
	void changeUnit(std::vector<std::unique_ptr<float>>& data) override;
};


#pragma once
#include "StrategyUnit.h"

class StrategyUnitFoot : public StrategyUnit
{
public:
	StrategyUnitFoot();
	~StrategyUnitFoot();
	void changeUnit(std::vector<std::unique_ptr<float>>& data) override;
};


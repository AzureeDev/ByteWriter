#pragma once
#include "PanelConfig.h"
#include <fstream>

class Panel
{
public:
	Panel(PanelConfig config, std::ofstream &opt);

private:
	unsigned char identifier = 1;
	unsigned char directions = 8;
};
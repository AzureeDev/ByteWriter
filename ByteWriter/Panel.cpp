#include "Panel.h"

Panel::Panel(PanelConfig config, std::ofstream &opt)
{
	this->identifier = config.identifier;
	this->directions = config.directions;

	unsigned char panel_data[8] = {
		this->identifier,
		NULL,
		NULL,
		NULL,
		this->directions,
		NULL,
		NULL,
		NULL
	};

	opt.write((char*)panel_data, sizeof(panel_data));
}
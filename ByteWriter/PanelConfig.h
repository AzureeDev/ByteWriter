#pragma once
struct PanelConfig
{
	PanelConfig(unsigned char id, unsigned char directions) : identifier(id), directions(directions) {}
	unsigned char identifier;
	unsigned char directions;
};
#include <iostream>
#include <fstream>
#include "Panel.h"

int main()
{
	std::ofstream myFile("file.test", std::ios::binary | std::ios::out);

	if (myFile.good())
	{
		for (int i = 0; i < (11 * 11); i++)
		{
			Panel(PanelConfig(0, 0), myFile);
		}

		// Blank 11x11 map

		myFile.close();
		std::cout << "Ok";
	}

	return 0;
}
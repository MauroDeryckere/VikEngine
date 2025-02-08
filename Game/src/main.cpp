#include "Engine.h"

#include <iostream>

void load() 
{
	std::cout << "Loading the game!\n";
}

VIKENGINE_MAIN
{
	using namespace VIK;

	VikEngine engine{ "" };

	engine.Run(load);

	return 0;
}
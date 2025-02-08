#include "Engine.h"

#include <iostream>

void load() 
{
	std::cout << "Loading the game!\n";
}

int main(int, char* [])
{
	using namespace VIK;
	VikEngine engine("../Data/", "Pacman");
	engine.Run(load);
	return 0;
}
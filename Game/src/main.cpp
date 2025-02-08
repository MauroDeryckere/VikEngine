#include "Engine.h"
#include <iostream>


void load()
{
	std::cout << "Loading the game!\n";
}

// SDL needs to be able to overwrite main depending on the platform here
#include "../../Libs/SDL/include/SDL3/SDL.h"
#include "../../Libs/SDL/include/SDL3/SDL_main.h"
int main(int, char*[])
{
	bool test{ true };

	//VIKENGINE_ASSERT(test, "");

	using namespace VIK;

	VikEngine engine{ "" };

	engine.Run(load);

	return 0;
}
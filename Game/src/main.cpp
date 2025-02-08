#include "Engine.h"
#include <iostream>


void load()
{
	std::cout << "Loading the game!\n";
}

// SDL needs to be able to overwrite main depending on the platform here
#include "SDL3/SDL.h"
#include "SDL3/SDL_main.h"
int main(int, char*[])
{
	// testing for asserts, temporarily here but should make separate testing files
	bool constexpr test1{ true };
	VIK_DB_ASSERT(test1, "test 1 debug assert failed")
	VIK_DB_ASSERT(test1, "")

	//bool constexpr test2{ false };
	//VIK_DB_ASSERT(test2, "")
	//VIK_DB_ASSERT(test2, "test 2 debug assert failed")


	using namespace VIK;

	VikEngine engine{ "" };

	engine.Run(load);

	return 0;
}
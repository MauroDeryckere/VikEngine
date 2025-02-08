#include "Engine.h"


#include <iostream>
#include "SDL3/SDL.h"

namespace VIK
{
	VikEngine::VikEngine(std::string const& dataPath)
	{
		std::cout << "Creating the engine!\n";
	}

	VikEngine::~VikEngine()
	{
		std::cout << "Destroying the engine!\n";
	}

	void VikEngine::Run(std::function<void()> const& load) noexcept
	{
		load();

		std::cout << "Running the engine!\n";

		// TODO add gameloop
	}
}

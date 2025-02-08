#include "Engine.h"

#include <iostream>

namespace VIK
{
	VikEngine::VikEngine(const std::string& dataPath, const std::string& windowTitle)
	{
		std::cout << "Creating the engine!\n";
	}

	VikEngine::~VikEngine()
	{
		std::cout << "Destroying the engine!\n";
	}

	void VikEngine::Run(const std::function<void()>& load) noexcept
	{
		std::cout << "Running the engine!\n";
		
		load();

		// TODO add gameloop
	}
}

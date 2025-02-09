#include "Engine.h"


#include <iostream>
#include "SDL3/SDL.h"

namespace VIK
{
	SDL_Window* g_window{};

	VikEngine::VikEngine(std::string const& dataPath, const std::string& windowTitle)
	{
		std::cout << "Creating the engine!\n";

		//if (SDL_Init(SDL_INIT_VIDEO) != 0)
		//{
		//	throw std::runtime_error(std::string("SDL_Init Error: ") + SDL_GetError());
		//}

		g_window = SDL_CreateWindow(
			windowTitle.c_str(),
			1024,
			768,
			SDL_WINDOW_OPENGL
		);

		if (g_window == nullptr)
		{
			throw std::runtime_error(std::string("SDL_CreateWindow Error: ") + SDL_GetError());
		}

		//Renderer::GetInstance().Init(g_window);

		//ResourceManager::GetInstance().Init(dataPath);

	}

	VikEngine::~VikEngine()
	{
		std::cout << "Destroying the engine!\n";

		//Renderer::GetInstance().Destroy();
		SDL_DestroyWindow(g_window);
		g_window = nullptr;
		SDL_Quit();
	}

	void VikEngine::Run(std::function<void()> const& load) noexcept
	{
		load();

		std::cout << "Running the engine!\n";

		// TODO add gameloop
		//auto& renderer{ Renderer::GetInstance() };
		//auto& sceneManager{ SceneManager::GetInstance() };
		//auto& input{ InputManager::GetInstance() };
		//auto& time{ GameTime::GetInstance() };

		bool doContinue = true;
		while (doContinue)
		{
		//	time.Update();
		//
		//	doContinue = input.ProcessInput();
		//	while (time.IsLag())
		//	{
		//		sceneManager.FixedUpdate();
		//		time.ProcessLag();
		//	}
		//	sceneManager.Update();
		//	sceneManager.LateUpdate();
		//	renderer.Render();
		//
		//	std::this_thread::sleep_for(time.GetSleepTime());
		}
	}
}

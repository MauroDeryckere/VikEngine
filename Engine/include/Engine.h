#ifndef VIKENGINE
#define VIKENGINE

// For entry point in main.cpp
#ifdef _WIN32
	#include <minwindef.h>
	#define VIKENGINE_MAIN int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
#else
	#define VIKENGINE_MAIN int main(int, char* [])
#endif


#include <string>
#include <functional>


namespace VIK
{
	class VikEngine final
	{
	public:
		explicit VikEngine(std::string const& dataPath);
		~VikEngine();

		// Start running the engine
		void Run(std::function<void()> const& load) noexcept;

		VikEngine(const VikEngine&) = delete;
		VikEngine(VikEngine&&) = delete;
		VikEngine& operator=(const VikEngine&) = delete;
		VikEngine& operator=(VikEngine&&) = delete;

	private:
	};

}

#endif
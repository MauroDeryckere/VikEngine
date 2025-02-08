#ifndef VIKENGINE
#define VIKENGINE

#include <string>
#include <functional>

namespace VIK
{
	class VikEngine final
	{
	public:
		explicit VikEngine(const std::string& dataPath, const std::string& windowTitle);
		~VikEngine();

		// Start running the engine
		void Run(const std::function<void()>& load) noexcept;

		VikEngine(const VikEngine&) = delete;
		VikEngine(VikEngine&&) = delete;
		VikEngine& operator=(const VikEngine&) = delete;
		VikEngine& operator=(VikEngine&&) = delete;

	private:
	};

}

#endif
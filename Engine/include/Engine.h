#ifndef _VIKENGINE
#define _VIKENGINE

#include "Asserts.h"

#include <string>
#include <filesystem>
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
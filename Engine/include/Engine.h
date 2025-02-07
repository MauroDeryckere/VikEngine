#ifndef VIKENGINE
#define VIKENGINE

namespace VIK
{
	class VikEngine final
	{
	public:
		explicit VikEngine() = default;
		~VikEngine() = default;

		// Start running the engine
		void Run() noexcept;

		VikEngine(const VikEngine&) = delete;
		VikEngine(VikEngine&&) = delete;
		VikEngine& operator=(const VikEngine&) = delete;
		VikEngine& operator=(VikEngine&&) = delete;

	private:
	};

}

#endif
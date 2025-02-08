#ifndef VIKENGINE_ASSERT
#define VIKENGINE_ASSERT

#include <iostream>
#include <cstdlib> // For std::abort() in case of assertion failure

//TODO engine assert

#if defined(NDEBUG) && not defined(VIKENGINE_CUSTOM_DEBUG)
	#define VIK_ASSERT(condition, ...) ((void)0) // No-op in Release builds
#else
#endif


#endif
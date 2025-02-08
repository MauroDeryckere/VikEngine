#ifndef _VIKENGINE_ASSERT
#define _VIKENGINE_ASSERT

#include <iostream>
#include <cstdlib> // For std::abort() in case of assertion failure


#if defined(NDEBUG) && not defined(VIKENGINE_CUSTOM_DEBUG)
	#define VIK_ASSERT(condition, ...) ((void)0) // No-op in Release builds
#else
	#define VIK_DB_ASSERT(condition, message)                                   \
	        do {                                                                \
	            if (!(condition)) {                                             \
	                std::cerr << "Assertion failed: " << #condition             \
	                          << "\nIn file: " << __FILE__                      \
	                          << "\nAt line: " << __LINE__;                     \
					if ((message)[0] != '\0'){									\
						std::cerr << "\nMessage: " << (message) << "\n";		\
					}															\
	                std::abort();                                               \
	            }                                                               \
	        } while (false);                                         
#endif


#endif
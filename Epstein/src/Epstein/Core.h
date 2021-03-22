//Macros 
//Lst Edit : 21/03/2021 by Pasan.
#pragma once
#ifdef EP_PLATFORM_WINDOWS
	#ifdef EP_BUILD_DLL
		#define EPSTEIN_API __declspec(dllexport)
	#else
		#define EPSTEIN_API __declspec(dllimport)
	#endif // DEBUG
#else
	#error Epstein currently only support Windows!
#endif // EP_PLATFORM_WINDOWS

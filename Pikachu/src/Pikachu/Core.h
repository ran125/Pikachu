#pragma once
#ifdef PK_PLATFORM_WINDOWS
	#ifdef PK_BUILD_DLL
		#define PIKACHU_API __declspec(dllexport)
	#else
		#define PIKACHU_API __declspec(dllimport)
    #endif
#else
	#error Pikachu only support Windows;
#endif // PK_PLATFORM_WINDOWS


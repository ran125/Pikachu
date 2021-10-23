#pragma once
#include "Core.h"
namespace Pikachu {
	class PIKACHU_API Application
	{
	public:
		Application();
		virtual	~Application();
		void Run();

	};
	//to be defined in client
	Application* CreateApplication();
}



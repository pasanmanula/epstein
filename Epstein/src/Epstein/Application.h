#pragma once
#include "core.h"

namespace Epstein {
	class EPSTEIN_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}



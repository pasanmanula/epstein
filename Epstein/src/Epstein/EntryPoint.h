#pragma once

#ifdef EP_PLATFORM_WINDOWS

extern Epstein::Application* Epstein::CreateApplication();

	int main(int argc,char** argv) {
		printf("Epstein Engine!\n");
		auto app = Epstein::CreateApplication();
		app->Run();
		delete app;
	}

#endif //  

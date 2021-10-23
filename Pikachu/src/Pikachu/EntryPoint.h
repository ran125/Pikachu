#pragma once
#ifdef PK_PLATFORM_WINDOWS
extern Pikachu::Application* Pikachu::CreateApplication();
int main(int argc,char** argv) {
	printf("start engine");
	auto app = Pikachu::CreateApplication();
	app->Run();
	delete app;
}
#endif
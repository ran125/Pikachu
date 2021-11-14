#pragma once 
#ifdef PK_PLATFORM_WINDOWS
extern Pikachu::Application* Pikachu::CreateApplication();
int main(int argc, char** argv) {
	//printf("start engine");
	Pikachu::Log::Init();
	PK_CORE_WARN("Initialized Log");
	//Pikachu::Log::GetCoreLogger()->warn("Initialized Log");
	//Pikachu::Log::GetClientLogger()->info("hello");
	//int a = 5;
	//PK_INFO("hellow Var = {0}", a);
	auto app = Pikachu::CreateApplication();
	app->Run();
	delete app;
}
#endif 
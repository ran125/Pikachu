#include <Pikachu.h>
class Sandbox : public Pikachu::Application
{
public:
	Sandbox() {
	};
	~Sandbox() {
	};
};


Pikachu::Application* Pikachu::CreateApplication() {
	return new Sandbox();
}
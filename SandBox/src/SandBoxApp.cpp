#include <Epstein.h>

class Sandbox : public Epstein::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


Epstein::Application* Epstein::CreateApplication()
{
	return new Sandbox();
}
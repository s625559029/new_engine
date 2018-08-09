#include "SystemClass.h"

int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PSTR pScmdline,
	int iCmdshow)
{
	SystemClass* system;
	bool result;

	//Create system object
	system = new SystemClass;
	if (!system)
	{
		return 0;
	}

	//Initialize and run system object
	result = system->Initialize();
	if (result)
	{
		system->Run();
	}

	system->Shutdown();
	delete system;
	system = 0;

	return 0;
}
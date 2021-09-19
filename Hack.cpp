#include "Includes.h"

DWORD ClientBase;
DWORD EngineBase;
DWORD LocalPlayer;

// class
Misc misc;

void InitCheat()
{
	ClientBase = (DWORD)(GetModuleHandle("client.dll"));
	EngineBase = (DWORD)(GetModuleHandle("engine.dll"));

	LocalPlayer = *(DWORD*)(ClientBase + dwLocalPlayer);

	// here insert hacks
	misc.BunnyHop();
}

#include "Includes.h"


BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, endScene::MainThread, hMod, 0, nullptr);
		break;
	}
	return TRUE;
}

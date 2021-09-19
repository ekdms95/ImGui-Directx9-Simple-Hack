#include "Includes.h"

void Misc::BunnyHop()
{
	if (Config.misc_bhop)
	{
		if (LocalPlayer != NULL) // check
		{
			int flag = *(BYTE*)(LocalPlayer + m_fFlags);
			if (GetAsyncKeyState(VK_SPACE) && flag & (1 << 0))
			{
				*(DWORD*)(ClientBase + dwForceJump) = 6;
			}
		}
		Sleep(3);
	}
}

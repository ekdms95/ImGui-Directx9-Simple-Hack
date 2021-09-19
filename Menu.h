#pragma once
typedef long(__stdcall* EndScene)(LPDIRECT3DDEVICE9);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

namespace endScene {
	DWORD WINAPI MainThread(LPVOID lpReserved);
}
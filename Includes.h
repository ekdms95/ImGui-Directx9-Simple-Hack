#pragma once

#include <d3d9.h>
#include <d3dx9.h>
#include <Windows.h>
#include <cstdlib>
#include <cstddef>

#pragma comment(lib,"d3dx9.lib")
#pragma comment(lib,"d3d9.lib")

#include "kiero.h"
#include "minhook/include/MinHook.h"
#include "imgui/imgui.h"
#include "imgui/imconfig.h"
#include "imgui/imgui_impl_dx9.h"
#include "imgui/imgui_impl_win32.h"

#include "Menu.h"
#include "config.h"
#include "Hack.h"
#include "Misc.h"
#include "Offsets.h"

using namespace hazedumper::signatures;
using namespace hazedumper::netvars;
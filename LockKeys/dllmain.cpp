// dllmain.cpp : DllMain ��ʵ�֡�

#include "stdafx.h"
#include "resource.h"
#include "LockKeys_i.h"
#include "dllmain.h"

CLockKeysModule _AtlModule;
HINSTANCE g_Hinstance = NULL;


// DLL ��ڵ�
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	g_Hinstance = hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}

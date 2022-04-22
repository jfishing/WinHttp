// winhttp.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "winhttp.h"

/*

extern "C" {
// The core api of the hook function
HOOKAPI int HookFunction(void *oldfunc, void **poutold, void *newfunc);
// Used to get a server-defined specific function by name
//HOOKAPI void *GetServerSymbol(char const *name);
}
*/
#pragma comment(linker, "/export:HookFunction=BDXCORE.HookFunction")
#pragma comment(linker, "/export:GetServerSymbol=BDXCORE.dlsym_real")
#pragma comment(linker, "/export:dlsym_real=BDXCORE.dlsym_real")

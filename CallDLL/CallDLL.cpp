// CallDLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../DLL/DLL.h"
#pragma comment(lib, "DLL.lib")

int main()
{
	int x = add(10, 5);
	_TCHAR buff[256] = { 0 };
	_itot_s(x, buff, 256, 10);

	::MessageBox(NULL, buff, _T("10 + 5 ="), MB_OK);

	return 0;
}
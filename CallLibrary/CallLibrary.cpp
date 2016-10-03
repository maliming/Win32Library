// CallLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "../Lib/Lib.h"
#pragma comment(lib, "Lib.lib")

int main()
{
	int x = add(10, 20);
	_TCHAR buff[256] = { 0 };
	_itot_s(x, buff, 256, 10);

	::MessageBox(NULL, buff, _T("10 + 20 ="), MB_OK);

    return 0;
}
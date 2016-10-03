// CallLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "../DLL/DLL.h"
#pragma comment(lib, "DLL.lib")

int main()
{
	int x = add(10, 20);
    return 0;
}
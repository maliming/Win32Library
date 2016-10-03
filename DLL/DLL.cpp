// DLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DLL.h"

int WINAPI add(int a, int b)
{
	return a + b;
}

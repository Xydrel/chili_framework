#pragma once
#include "Core/Core.h"

FORCEINLINE bool IsPowOfTwo(int val)
{
	return (val & (val - 1));
}

template <typename T>
FORCEINLINE T Square(T val)
{
	return val * val;
}

template <typename T>
FORCEINLINE T Cube(T val)
{
	return (val * val) * val;
}

#if CTSW_TEST_FACILITY_ENABLED
#include <iostream>
void TestMathFunctions()
{
#include <iostream>

	// find the function to present text to screen in directX11
	/*int x=2, y=4, z=5;
	printf("testing if %d is power of two: result %s", y,(IsPowOfTwo(y) ? "true" : "false"));*/
}
#endif
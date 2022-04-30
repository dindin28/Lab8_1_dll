#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <cmath>
#include "MathLibrary.h"

// https://uk.wikipedia.org/wiki/%D0%9F%D0%B0%D1%80%D0%B0%D0%BB%D0%B5%D0%BB%D0%B5%D0%BF%D1%96%D0%BF%D0%B5%D0%B4

double CalcSurfaceArea(double a, double b, double c)
{
	return 2 * (a * b + b * c + a * c);
}

double CalcSpaceDiagonalLength(double a, double b, double c)
{
	return std::sqrt(a * a + b * b + c * c);
}

// MathLibrary.h - Contains declarations of math functions
#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

extern "C" MATHLIBRARY_API double CalcSurfaceArea(double a, double b, double c);
extern "C" MATHLIBRARY_API double CalcSpaceDiagonalLength(double a, double b, double c);

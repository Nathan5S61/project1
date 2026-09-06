#include "Math.h"
#include "Mathpdf.h"
#include <iostream>

void FactorizationExercises()
{
	std::cout << "Factorization Exercises\n"; Sleep(500);
	SetQuestion(16);
	Openpdf(L"Mathematics_resources\\Factor.pdf");

	std::cout << "Rules for this exercise:\n";
	Sleep(100);
	std::cout << "5.Only integer coefficients, no fractional coefficients and no radicals.\n"; Sleep(100);
	std::cout << "6.Please fill in the following content in LaTeX format.\n"; Sleep(100);
	// Part 1: Basic problems
	std::cout << "Part1.Basic problems\n" << "Factorize each of the following polynomials:\n"; Sleep(500);
	askQuestion("1. 3x + 6\n", "3(x+2)"); Sleep(500);
	askQuestion("2. 5a^2 - 10a \n", "5a(a-2)"); Sleep(500);
	askQuestion("3. x^2 - 9 \n", "(x-3)(x+3)"); Sleep(500);
	askQuestion("4. 4y^2 - 25 \n", "(2y-5)(2y+5)"); Sleep(500);
	askQuestion("5. 6m^2 + 9m \n", "3m(2m+3)"); Sleep(500);

	//Part 2:  Intermediate Level
	std::cout << "Part2.Intermediate Level\n"; Sleep(500);
	askQuestion("1. x^2 + 6x + 9 \n", "(x+3)(x+3)"); Sleep(500);
	askQuestion("2. a^2 - 8a + 16 \n", "(a-4)(a-4)"); Sleep(500);
	askQuestion("3. x^2 + 5x + 6 \n", "(x+2)(x+3)"); Sleep(500);
	askQuestion("4. x^2 - 2x - 8 \n", "(x-4)(x+2)"); Sleep(500);
	askQuestion("5. 2x^2 + 7x + 3 \n", "(2x+1)(x+3)"); Sleep(500);

	//Part 3: Advanced Level
	std::cout << "Part3.Advanced Level\n"; Sleep(500);
	askQuestion("1. ax + ay + bx + by\n", "(a+b)(x+y)"); Sleep(500);
	askQuestion("2. x^3 - 4x\n", "x(x+2)(x-2)"); Sleep(500);
	askQuestion("3. x^2 - y^2 + x + y\n", "(x+y)(x-y+1)"); Sleep(500);
	askQuestion("4. 3x^2 - 12xy + 12y^2\n", "3(x-2)(x+2)"); Sleep(500);
	askQuestion("5. x^4 - 16\n", "(x^2+4)(x-2)(x+2)"); Sleep(100);
	//Challenge Level
	std::cout << "Challenge Level\n"; Sleep(100);
	askQuestion("6. x^3 + 3x^2 - 4x -12\n", "(x-2)(x+2)(x-3)"); Sleep(300);
}
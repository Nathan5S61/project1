#include "Math.h"
#include "Mathpdf.h"
#include <iostream>

void ExponentSimplificationExercises()
{
	SetQuestion(23);
	Openpdf(L"Mathematics_resources\\Exponent.pdf");
	std::cout << "Exponent Simplification Exercises\n";
	Sleep(500);
	std::cout << "Rules for this exercise:\n";
	Sleep(100);
	std::cout << "5.Only integer exponents, no fractional exponents and no radicals.\n"; Sleep(100);
	std::cout << "6.Negative exponents may appear during calculation, but final answers must contain no negative exponents.\n"; Sleep(100);
	std::cout << "7.Please fill in the following content in LaTeX format.\n"; Sleep(100);
	// Part 1: Basic problems
	std::cout << "Part1.Basic problems\n"
		<< "Simplify each algebraic expression:\n";
	Sleep(500);
	askQuestion("1. x^5 \\cdot x^3=? \n", "x^8"); Sleep(500);
	askQuestion("2. a^{10} \\div a^4=? \n", "a^6"); Sleep(500);
	askQuestion("3. (m^4)^3=? \n", "m^12"); Sleep(500);
	askQuestion("4. (4y)^2=? \n", "16y^2"); Sleep(500);
	askQuestion("5. n^0=? (n \\neq 0)\n", "1"); Sleep(500);
	askQuestion("6. \\dfrac{k^3}{k^8}=? \n", "\\frac{1}{k^5}"); Sleep(500);
	askQuestion("7. (3ab)^3=? \n", "27a^3b^3"); Sleep(500);
	askQuestion("8. \\dfrac{p^2}{p^9}=? \n", "\\frac{1}{p^7}"); Sleep(500);

	// Part 2: Intermediate Mixed Problems
	std::cout << "Part2.Intermediate Mixed Problems\n"; Sleep(500);
	askQuestion("1. x^4 \\cdot x \\div x^7=? \n", "\\frac{1}{x^2}"); Sleep(500);
	askQuestion("2. (2c^3)^2 \\div 4c^4=? \n", "c^2"); Sleep(500);
	askQuestion("3. \\dfrac{(5t)^2}{t^6}=? \n", "\\frac{25}{t^4}"); Sleep(500);
	askQuestion("4. (\\dfrac{x^4}{y^2})^3 \div x^15=? \n", "\\frac{1}{x^3y^6}"); Sleep(500);
	askQuestion("5. a^2 \\cdot a^5 \div a^10=? \n", "\\frac{1}{a^3}"); Sleep(500);
	askQuestion("6. \\dfrac{(2s^2)^4}{16s^9}=? \n", "\\frac{1}{s}"); Sleep(500);
	askQuestion("7. (3m^2n)^2 \div m^7=? \n", "\\frac{9n^2}{m^3}"); Sleep(500);
	askQuestion("8. \\dfrac{z^4 \cdot z}{z^{11}}=? \n", "\\frac{1}{z^6}"); Sleep(500);

	//Part 3: Advanced Comprehensive Problems
	std::cout << "Part3.Advanced Comprehensive Problems\n"; Sleep(500);
	askQuestion("1. \\dfrac{(2a^b)^3}{(4a^4b^2)^2}=? \n", "\\frac{1}{2a^b}"); Sleep(500);
	askQuestion("2. (\\dfrac{3x^2}{y^3})^2 \\div x^9=? \n", "\\frac{9}{x^5y^6}"); Sleep(500);
	askQuestion("3. \\dfrac{5^{n+4}}{5^{n+7}}=? \n", "\\frac{1}{125}"); Sleep(500);
	askQuestion("4. (2p^3q)^2 \\cdot p \\div p^10=? \n", "\\frac{4q^2}{p^3}"); Sleep(500);
	askQuestion("5. \\dfrac{(3m^4)^2}{9m^{11}}=? \n", "\\frac{1}{m^3}"); Sleep(500);
	
	//Part 4: Evaluation Problems
	std::cout << "Part4.Evaluation Problems\n"; Sleep(500);
	std::cout << "Question 1 and 2 are given a^m=5, a^n=3";
	askQuestion("1. Evaluate a^{m+n}", "15");
	askQuestion("2. Evaluate a^{3m-n}", "\\frac{125}{3}");
}
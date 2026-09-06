#include "Math.h"
#include "Mathpdf.h"
#include <iostream>

void IdentityExercise()
{
	std::cout << "Identity Exercises" << std::endl; Sleep(500);
	SetQuestion(82);
	Openpdf(L"Mathematics_resources\\Identity.pdf");
	Sleep(500);
	std::cout << "5 .Please fill in the following content in LaTeX format.\n"; Sleep(100);
	//Level1
	std::cout << "Level1" << std::endl;
	std::cout << "Part1.Determine whether each equation is an identity. Answer true or false." << std::endl
		<< "You can use the cross method." << std::endl << "Text your answer by true(if yes), false(if not)" << std::endl;
	Sleep(100);
	askQuestion("1.(x + 2) ^ 2 = x ^ 2 + 4x + 4", "true"); Sleep(500);
	askQuestion("2.(x-3)^2 = x^2 -9", "false"); Sleep(500);
	askQuestion("3.(a+b)(a-b)=a^2-b^2", "true"); Sleep(500);
	askQuestion("4.(x+1)(x+2)=x^2+3x+2", "false"); Sleep(500);
	askQuestion("5.10r^2+8=5(2r^2-\\dfrac{1}{5})-7", "true"); Sleep(500);
	askQuestion("6.x^3-8=(x-2)(x^2+2x+4)", "true"); Sleep(500);
	askQuestion("7.(2x-5)^2=4x^2-20x+25", "true"); Sleep(500);
	askQuestion("8.x^2-4x = x(x-4)+1", "false"); Sleep(500);
	askQuestion("9.(x+y)^3 = x^3+y^3", "false"); Sleep(500);
	askQuestion("10.(a+1)(a-6)=a^2-5a-6", "true"); Sleep(500);

	std::cout << "Part2.Find the unknown constans A and B in each of following identities." << std::endl
		<< "Text your answer by A=...,B=..." << std::endl; Sleep(100);
	askQuestion("1.3x+5 \\equiv A(x-1)+B", "A=3,B=8"); Sleep(500);
	askQuestion("2.2x-7 \\equiv A(x+3)+B", "A=2,B=-13"); Sleep(500);
	askQuestion("3.4x+1 \\equiv A(2x-3)+B", "A=2,B=7"); Sleep(500);
	askQuestion("4.6-5x \\equiv A(1-x)+B", "A=5,B=1"); Sleep(500);
	askQuestion("5.x^2+4x-2 \\equiv (x-1)(x+A)+B", "A=5,B=3"); Sleep(500);
	askQuestion("6.2x^2-3x+7 \\equiv (x+2)(2x+A)+B", "A=-7,B=21"); Sleep(500);
	askQuestion("7.3x^2-5x+10 \\equiv (Ax+1)(x-2)+B", "A=3,B=12"); Sleep(500);
	askQuestion("8.2x^2+5x-6 \\equiv (2x-A)(x+3)+Bx", "A=2,B=1"); Sleep(500);

	std::cout << "Part 3. Expand the following expressions." << std::endl; Sleep(100);
	askQuestion("1.(x+4)(x-7)", "x^2-3x-28"); Sleep(500);
	askQuestion("2.(2x-3)(x+5)", "2x^2+7x-15"); Sleep(500);
	askQuestion("3.(3x-2)(4x-1)", "12x^2-11x+2"); Sleep(500);
	askQuestion("4.(5-2x)(3+4x)", "-8x^2+14x+15"); Sleep(500);
	askQuestion("5.(x+6)^2", "x^2+12x+36"); Sleep(500);
	askQuestion("6.(2x-5)^2", "4x^2-20x+25"); Sleep(500);
	askQuestion("7.(4x+3)^2", "16x^2+24x+9"); Sleep(500);
	askQuestion("8.(3x-1)(3x+1)", "9x^2-1"); Sleep(500);
	askQuestion("9.(6x+2)(6x-2)", "36x^2-4"); Sleep(500);
	askQuestion("10.(x^2-3)(2x+4)", "2x^3+4x^2-6x-12"); Sleep(500);
	askQuestion("11.(2x^2-3x+4)(x-5)", "2x^3-13x^2+19x-20"); Sleep(500);
	askQuestion("12.(3x-2)^2-(x+4)(2x-1)", "7x^2-19x+8"); Sleep(500);

	std::cout << "Part 4. Without using a calculator, use identities to find the values of the following expressions." << std::endl; Sleep(100);
	askQuestion("1.98^2", "9604"); Sleep(500);
	askQuestion("2.103^2", "10609"); Sleep(500);
	askQuestion("3.57^2-43^2", "1400"); Sleep(500);
	askQuestion("4.204\\times196", "39984"); Sleep(500);
	askQuestion("5.(49.5)^2", "2450.25"); Sleep(500);
	askQuestion("6.101^2-2\\times101+1", "10000"); Sleep(500);
	askQuestion("7.998^2 + 4\\times 998 +4", "1000000"); Sleep(500);
	askQuestion("8.\\dfrac{2026^2-2024^2}{4}", "2025"); Sleep(500);

	//Level2
	std::cout << "Level2" << std::endl;
	std::cout << "Part1.Determine whether each equation is an identity. Answer true or false." << std::endl
		<< "You can use the cross method." << std::endl << "Text your answer by true(if yes), false(if not)" << std::endl;
	Sleep(100);
	askQuestion("1.(2x-3)^2 = 4x^2-12x+9", "true"); Sleep(500);
	askQuestion("2.(3x+4)^2 = 9x^2+16", "false"); Sleep(500);
	askQuestion("3.(2a+5b)(2a-5b)=4a^2-25b^2", "true"); Sleep(500);
	askQuestion("4.(2x-3)(x+4)=2x^2+5x", "false"); Sleep(500);
	askQuestion("5.6k^2-4 = 3\\left(2k^2+\\dfrac{2}{3}\\right)-6", "false"); Sleep(500);
	askQuestion("6.x^3+27=(x+3)(x^2-3x+9)", "true"); Sleep(500);
	askQuestion("7.(5x+2)^2=25x^2+20x+4", "true"); Sleep(500);
	askQuestion("8.3x^2-6x = 3x(x-2)-5", "false"); Sleep(500);
	askQuestion("9.(a-b)^3 = a^3-b^3", "false"); Sleep(500);
	askQuestion("10.(2p-3)(p+5)=2p^2+7p-15", "true"); Sleep(500);

	std::cout << "Part2.Find the unknown constants A and B in each of following identities." << std::endl
		<< "Text your answer by A=...,B=..." << std::endl; Sleep(100);
	askQuestion("1.5x-9 \\equiv A(2x+4)+B", "A=5/2,B=-19"); Sleep(500);
	askQuestion("2.3x+11 \\equiv A(x-5)+B", "A=3,B=26"); Sleep(500);
	askQuestion("3.6x-4 \\equiv A(3x+2)+B", "A=2,B=-8"); Sleep(500);
	askQuestion("4.8-7x \\equiv A(2-x)+B", "A=7,B=-6"); Sleep(500);
	askQuestion("5.x^2-6x+5 \\equiv (x+2)(x+A)+B", "A=-8,B=21"); Sleep(500);
	askQuestion("6.3x^2+4x-8 \\equiv (x-1)(3x+A)+B", "A=7,B=-1"); Sleep(500);
	askQuestion("7.4x^2-7x+15 \\equiv (Ax-2)(x+3)+B", "A=4,B=9"); Sleep(500);
	askQuestion("8.3x^2-2x+4 \\equiv (3x-A)(x-2)+Bx", "A=2,B=6"); Sleep(500);

	std::cout << "Part 3. Expand the following expressions." << std::endl; Sleep(100);
	askQuestion("1.(2x-5)(3x+4)", "6x^2-7x-20"); Sleep(500);
	askQuestion("2.(4x+1)(2x-6)", "8x^2-22x-6"); Sleep(500);
	askQuestion("3.(5x-3)(2x-7)", "10x^2-41x+21"); Sleep(500);
	askQuestion("4.(4-3x)(5+2x)", "-6x^2-7x+20"); Sleep(500);
	askQuestion("5.(3x-4)^2", "9x^2-24x+16"); Sleep(500);
	askQuestion("6.(5x+2)^2", "25x^2+20x+4"); Sleep(500);
	askQuestion("7.(2x-7)^2", "4x^2-28x+49"); Sleep(500);
	askQuestion("8.(4x+5)(4x-5)", "16x^2-25"); Sleep(500);
	askQuestion("9.(3x-8)(3x+8)", "9x^2-64"); Sleep(500);
	askQuestion("10.(x^2+2x-5)(3x-1)", "3x^3+5x^2-17x+5"); Sleep(500);
	askQuestion("11.(3x^2-2x+5)(2x-3)", "6x^3-13x^2+19x-15"); Sleep(500);
	askQuestion("12.(4x+1)^2-(2x-3)(5x+2)", "6x^2+27x+7"); Sleep(500);

	std::cout << "Part 4. Without using a calculator, use identities to find the values of the following expressions." << std::endl; Sleep(100);
	askQuestion("1.197^2", "38809"); Sleep(500);
	askQuestion("2.206^2", "42436"); Sleep(500);
	askQuestion("3.68^2-32^2", "3600"); Sleep(500);
	askQuestion("4.307\\times293", "89951"); Sleep(500);
	askQuestion("5.(60.5)^2", "3660.25"); Sleep(500);
	askQuestion("6.203^2-2\\times 203 \\times 3 +3^2", "40000"); Sleep(500);
	askQuestion("7.1997^2+6\\times1997+9", "3996009"); Sleep(500);
	askQuestion("8.\\dfrac{3042^2-3038^2}{8}", "3040"); Sleep(500);

	std::cout << "Part 5. Word problems" << std::endl; Sleep(100);
	askQuestion("1.The length of a rectangle is (3x-4) cm and the width is (2x+5) cm. Expand and simplify the expression for its area.", "6x^2+7x-20 cm^2"); Sleep(500);
	askQuestion("2.A square has side (4a-3) cm. If each side is decreased by 2 cm, find the expanded form of the new area.", "16a^2-40a+25 cm^2"); Sleep(500);
	askQuestion("3.Given m+n=15 and mn=44. Use algebraic identity to evaluate m^2 + n^2.", "157"); Sleep(500);
	askQuestion("4.Two positive integers differ by 7, their product is 30. Let the smaller number be x. Set up an equation and expand it.", "x^2+7x-30=0"); Sleep(500);
	askQuestion("5.The area of a rectangle is 6x^2-7x-20. One side is (2x-5). Find the expression of the other side.", "3x+4"); Sleep(500);
	askQuestion("6.Show that the difference between the squares of two consecutive odd numbers is divisible by 8. Let the two numbers be 2k-1 and 2k+1.", "8k, divisible by 8"); Sleep(500);
}
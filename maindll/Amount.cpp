#include "Amount.h"

extern "C"
{
	__declspec(dllexport)
	void SetQuestion(int amount)
	{
		question = amount;
		std::cout << "1.You only have "<< bar+1 <<"*"<<health<<" health, but it can heal back when you answer correctly.\n";
		std::cout << "2.Your health will decrease by 6 if you answer incorrectly, and increase by 1 if you answer correctly.\n";
		std::cout << "3.You have "<< question <<" questions in total, and the game will end when you answer all of them.\n";
		std::cout << "4.Please input your answers after output the question\n";
	}
}
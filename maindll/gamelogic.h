#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
	__declspec(dllexport) void askQuestion(std::string question, std::string answer);
	__declspec(dllexport) void initRandom();
	__declspec(dllexport) bool DebugCheck();
#ifdef __cplusplus
}
#endif
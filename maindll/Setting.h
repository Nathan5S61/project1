#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifdef __cplusplus
extern "C" {
#endif
	__declspec(dllexport) void otherSettings();
	__declspec(dllexport) void loadSettings();
#ifdef __cplusplus
}
#endif

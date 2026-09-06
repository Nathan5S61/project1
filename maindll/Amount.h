#pragma once
#include "global.h"
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif
	__declspec(dllimport) void SetQuestion(int amount);

#ifdef __cplusplus
}
#endif
//soundtrack part
#pragma once
#include "miniaudio.h"
#include <iostream>
#include <vector>
#include <string>



#ifdef __cplusplus
extern "C" {
#endif

	__declspec(dllimport) bool AudioInit();
	__declspec(dllimport) void AudioPlay(const char* filePath);
	__declspec(dllimport) void AudioShutdown();
	__declspec(dllimport) void musicThreadWork();

#ifdef __cplusplus
}
#endif
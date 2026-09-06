#pragma once
#include "global.h"
#include <unordered_map>
#include <string>

std::unordered_map<std::string, int*>& getSettingMap();
bool assignSetting(const std::string& name, int value);
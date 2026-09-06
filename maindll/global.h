#pragma once
#ifndef GLOBAL_H
#define GLOBAL_H
#include <string>
#include <vector>

inline std::vector<std::string> playlist = { "sound/soundtrack/aris.mp3","sound/soundtrack/lawnbgm.mp3","sound/soundtrack/lawnbgm(1).mp3"};//soundtrack part
inline std::string ans;
inline std::string user;
inline std::string choose_exercise;
inline std::string otherSettings_choose;
inline short index = 0;
inline short soundtrackchange = 0;
inline int health = 5;
inline int maxhealth = health;
inline int health_decrease = 0;
inline int bar = 2;
inline int maxbar = bar;
inline int question = 0;
inline bool debug = false;

#endif
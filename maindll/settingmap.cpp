#include "settingmap.h"

std::unordered_map<std::string, int*>& getSettingMap()
{
    static std::unordered_map<std::string, int*> m;
    static bool inited = false;
    if (!inited)
    {
        m["health"] = &health;
        m["maxhealth"] = &maxhealth;
        m["bar"] = &bar;
        m["maxbar"] = &maxbar;
        inited = true;
    }
    return m;
}

bool assignSetting(const std::string& name, int value)
{
    auto& settingMap = getSettingMap();
    auto it = settingMap.find(name);
    if (it == settingMap.end())
        return false;
    *(it->second) = value;
    return true;
}
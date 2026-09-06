#include "global.h"
#include "Setting.h"
#include "settingmap.h"

extern "C"
{
    __declspec(dllexport)
        void otherSettings() {
        if (debug) {
            std::cout << "Only text in number\n" << "1.reloadSettings.txt\t" << "2.Initialization settings\t\n";
            std::cin >> otherSettings_choose;
            if (otherSettings_choose == "1")
                loadSettings();
            else if (otherSettings_choose == "2") {
                health = 5;
                maxhealth = 5;
                bar = 2;
                maxbar = 2;
            }
            else
            {
                std::cout << "Invalid exercise choice.\n";
            }
        }
    }
    __declspec(dllexport)
        void loadSettings()
    {
        std::ifstream settingsFile("settings.txt");
        if (!settingsFile.is_open())
        {
            std::cerr << "Failed to open settings.txt" << std::endl;
            return;
        }
        std::string key;
        short val;
        while (settingsFile >> key >> val)
        {
            if (key == "\\end") break;
            if (key == "debug") debug = (val != 0);
            else assignSetting(key, val);
        }

        if (debug)
        {
            std::cout << "Debug mode is ON" << std::endl;
        }
        else
        {
            std::cout << "Debug mode is OFF" << std::endl;
        }
    }
}
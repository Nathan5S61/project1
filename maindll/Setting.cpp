#include "global.h"
#include "Setting.h"

extern "C"
{
    __declspec(dllexport)
        void otherSettings() {
        if (debug) {
            std::cout << "Only text in number\n" << "1.reloadSettings.txt\t" << "2.Initialization settings\t\n";
            std::cin >> otherSettings_choose;
            if (otherSettings_choose == "1")
                loadSettings();
            if (otherSettings_choose == "2") {
                health = 5;
                maxhealth = health;
                bar = 2;
                maxbar = bar;
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

        settingsFile >> debug;

        if (settingsFile.fail())
        {
            std::cerr << "settings file read fail!" << std::endl;
            return;
        }

        if (debug)
        {
            settingsFile >> health >> maxhealth >> bar >> maxbar;
            if (settingsFile.fail())
            {
                std::cerr << "Missing health/bar/question value!" << std::endl;
                return;
            }

            std::cout << "Debug mode is ON" << std::endl;
        }
        else
        {
            std::cout << "Debug mode is OFF" << std::endl;
        }
    }
}
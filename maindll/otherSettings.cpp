#include "otherSettings.h"

extern "C" {
	__declspec(dllexport)
		void otherSettings() {
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
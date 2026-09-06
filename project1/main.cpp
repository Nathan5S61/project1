#include "global.h"
#include "gamelogic.h"
#include "AudioPlayer.h"//soundtrack part
#include "Setting.h"
#include "Math.h"
#include "Mathpdf.h"
#include <iostream>
#include <thread>
#include <cstdlib>
#include <windows.h>
#pragma comment(lib,"winmm.lib")  

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char buf[256];
    GetCurrentDirectoryA(256, buf);
    std::cout << "目前工作目錄：" << buf << "\n";
    
	loadSettings();
    if (!AudioInit())//soundtrack part
    {
        std::cout << "engine init fail\n";
        return -1;
    }
    initRandom();

    AudioPlay(playlist[index].c_str());      //soundtrack part
	std::thread musicThread(musicThreadWork);//soundtrack part
	musicThread.detach();                    //soundtrack part
    while (true)
    {
        std::cout << "Choose an exercise:\n" << "1.Exponent\t" << "2.Factorzation\t" << "3.Identity\t" << "EX_mode(debug)\n";
        std::cin >> choose_exercise;
        if (choose_exercise == "1" || choose_exercise == "Exponent")
        {
            PlaySound(L"sound/begin.wav", NULL, SND_FILENAME | SND_ASYNC);
            ExponentSimplificationExercises();
            std::cout << "You have completed all the exercises. Congratulations!\n";
            Sleep(300);
        }
        else if (choose_exercise == "2" || choose_exercise == "Factorzation")
        {
            PlaySound(L"sound/begin.wav", NULL, SND_FILENAME | SND_ASYNC);
            FactorizationExercises();
            std::cout << "You have completed all the exercises. Congratulations!\n";
            Sleep(300);
        }
        else if (choose_exercise == "3" || choose_exercise == "Identity")
        {
            PlaySound(L"sound/begin.wav", NULL, SND_FILENAME | SND_ASYNC);
            IdentityExercise();
            std::cout << "You have completed all the exercises. Congratulations!\n";
            Sleep(300);
		}
        else if ((choose_exercise == "EX_mode") && DebugCheck()) {
            std::cout << "Please only text in number\n" << "EX1.otherSetting\t" << "EX2.Open_answer\t" << "EX3.break\n";
            std::cin >> choose_exercise;
            if (choose_exercise == "EX1")
                otherSettings();
            else if (choose_exercise == "EX2")
			    Openpdf_answer();
            else if (choose_exercise == "EX3")
                break;
        }
        else
        {
            std::cout << "Invalid exercise choice.\n";
            Sleep(300);
        }
    }
    std::cin.get();
    AudioShutdown();
	return 0;
}
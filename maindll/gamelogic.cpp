#include "global.h"
#include "gamelogic.h"
#include "AudioPlayer.h"//soundtrack part
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

class GameLogic
{
    public :
        //chance part
        void Random_init()
        {
            srand((unsigned int)time(nullptr));
        }
        bool chance(int percent)
        {
            int r = rand() % 100;
            return r < percent;
        }
        //DebugCheck
        bool Logic_DebugCheck()
        {
            if (debug)
            {
                return true;
            }
            else
            {
                return false;
            }
		}
        //gamelogic health part
        void Logic_HealthCheck()
        {
            if (health <= 0)
            {
                while (true)
                {
                    if (bar > 0)
                    {
                        bar--;
                        health += 5;
                        if (health > 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        std::cout << "Failure.\n";
                        std::cin.get();
                        AudioShutdown();//soundtrack part
                        exit(0);
                    }
                }
            }
            if (health > maxhealth)
            {
                if (bar >= maxbar)
                {
                    health = maxhealth;
                }
                else
                {
                    health -= 5;
                    bar++;
                }
            }
        }
        void clearScreen()
        {
            system("cls");
        }
        void Logic_output()
        {
            if (health != maxhealth)
            {
                std::cout << "Health: "
                    << bar
                    << "*"
                    << maxhealth
                    << "+"
                    << 1
                    << "*"
                    << health
                    << std::endl;
            }
            else if (health == maxhealth)
            {
                std::cout << "Health: "
                    << bar + 1
                    << "*"
                    << maxhealth
                    << std::endl;
            }
            Sleep(500);
            std::cout << "Questions left: " << question << std::endl;
        }
        void check()
        {
            health_decrease = 0;
            if (ans == user)
            {
                std::cout << "Correct!\n";
                PlaySound(L"sound/correct.wav", NULL, SND_FILENAME | SND_ASYNC);
                health++;
                std::cout << "Health increased by 1.\n";
            }
            else
            {
                std::cout << "Incorrect. The correct answer is: " << ans << "\n";
                health -= 6;
                health_decrease += 6;
                if (chance(40)) {
                    health -= 4;
                    health_decrease += 4;
                    PlaySound(L"sound/incorrect(1).wav", NULL, SND_FILENAME | SND_ASYNC);
                }
                else PlaySound(L"sound/incorrect.wav", NULL, SND_FILENAME | SND_ASYNC);
                std::cout << "Health decreased by " << health_decrease << std::endl;
            }
            question--;
            Sleep(500);
            Logic_HealthCheck();
            Logic_output();
            if (question <= 0)
                clearScreen();
        }
        void Logic_askQuestion(std::string question, std::string answer)
        {
            ans = answer;
            std::cout << question;
            std::cin >> user;
            check();
        }
};

static GameLogic gl;

extern "C" {
    __declspec(dllexport)
    void askQuestion(std::string question, std::string answer){
        gl.Logic_askQuestion(question, answer);
    }
    __declspec(dllexport)
    void initRandom() {
        gl.Random_init();
    }
	__declspec(dllexport)
    bool DebugCheck() {
    return gl.Logic_DebugCheck();
	}
}
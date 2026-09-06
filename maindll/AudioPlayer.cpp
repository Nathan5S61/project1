//soundtrack part
#define MINIAUDIO_IMPLEMENTATION
#include "AudioPlayer.h"
#include "global.h"
#include <thread>
#include <cstdlib>
#include <cstring>
#include<windows.h>
#pragma comment(lib,"winmm.lib")

class MusicPlayer
{
public:
	bool runMusic = true;
    ma_sound g_sound;
    ma_engine engine;
    std::vector<ma_sound*> soundList;

    bool init()
    {
        return ma_engine_init(nullptr, &engine) == MA_SUCCESS;
    }
    void musicThreadWork()
    {
        while (runMusic)
        {
            if (!soundList.empty())
            {
                ma_sound* cur = soundList[0];
                if (ma_sound_at_end(cur))
                {
                    index++;
                    if (index >= playlist.size())
                    {
                        index = 1;
                    }
                    play(playlist[index].c_str());
                }
            }
            Sleep(50);
        }
    }
    void play(const char* filePath)
    {
        for (auto snd : soundList)
        {
            ma_sound_stop(snd);
            ma_sound_uninit(snd);
            delete snd;
        }
        soundList.clear();

        ma_sound* newSound = new ma_sound;
        auto ret = ma_sound_init_from_file(&engine, filePath, 0, nullptr, nullptr, newSound);
        if (ret != MA_SUCCESS)
        {
            std::cout << "load fail:" << filePath << "\n";
            delete newSound;
            return;
        }
        soundList.push_back(newSound);
        ma_sound_start(newSound);
    }

    void shutdown()
    {
        for (auto snd : soundList)
        {
            ma_sound_stop(snd);
        }
        ma_sleep(100);
        for (auto snd : soundList)
        {
            ma_sound_uninit(snd);
            delete snd;
        }
        soundList.clear();
        ma_sleep(100);
        ma_engine_uninit(&engine);
    }
    ~MusicPlayer()
    {
        shutdown();
    }
};

static MusicPlayer player;

extern "C"
{
    __declspec(dllexport)
        bool AudioInit()
    {
        return player.init();
    }
    __declspec(dllexport)
        void AudioPlay(const char* filePath)
    {
        player.play(filePath);
    }
    __declspec(dllexport)
        void AudioShutdown()
    {
        player.shutdown();
    }
    __declspec(dllexport)
        void musicThreadWork()
    {
        player.musicThreadWork();
	}
}
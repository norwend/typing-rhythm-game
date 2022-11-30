#pragma once
#include <SFML/Audio/Music.hpp>
#include <string>
using String = std::string;

class AudioHandler {
private:
    sf::Music mMusic;
public:
    void play(const String& fileName);
    void stop();
    [[nodiscard]] bool isPlaying();
    [[nodiscard]] int getSongPosition() { return mMusic.getPlayingOffset().asMilliseconds(); }
};

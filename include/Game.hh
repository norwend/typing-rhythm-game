#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <Window.hh>

#define GAME_NAME "TRG"

class Game {
private:
    Window mWindow;
    sf::Event mEvent;
    void update();
    void render();
    void pollEvents();
public:
    Game();
    ~Game();

    void run();
};

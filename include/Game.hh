#pragma once
#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>
#include <Window.hh>
#include <Interfaces.hh>

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

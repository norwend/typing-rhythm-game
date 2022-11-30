#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
using WinPtr = std::shared_ptr<sf::RenderWindow>;

class DrawObject {
public:
    virtual void draw(WinPtr window) const = 0;
};


#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "Interfaces.hh"

using WinPtr = std::shared_ptr<sf::RenderWindow>;
using String = std::string;

class Window {
private:
    sf::VideoMode mVideoMode;
    uint32_t mStyle;
    String mTitle;
    WinPtr mWindow = nullptr;

    void recreateWindow(sf::VideoMode videoMode);
public:
    // Window methods
    void toggleFullscreen();
    void changeSize(uint32_t width, uint32_t height);
    inline void close() { mWindow->close(); }

    // Clear the window
    inline void clear() { mWindow->clear(); }
    void clear(uint8_t r, uint8_t g, uint8_t b);
    void clear(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

    // Display the prepared stuff
    inline void display() { mWindow->display(); }

    inline void draw(const sf::Drawable& drawable) const { mWindow->draw(drawable); }
    inline void draw(const DrawObject& drawable) const { drawable.draw(this->mWindow); }

    bool pollEvent(sf::Event& event);

    [[nodiscard]] inline sf::Vector2<int32_t> getMousePosition() {
        return sf::Mouse::getPosition(*mWindow);
    }
    [[nodiscard]] inline bool isOpen() const { return mWindow->isOpen(); }

    Window(uint32_t width, uint32_t height, const String& title);
    ~Window() = default;
};
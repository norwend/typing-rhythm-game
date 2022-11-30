#pragma once
#include <string>
#include <SFML/Graphics.hpp>

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
    void toggleFullscreen();
    void changeSize(uint32_t width, uint32_t height);
    inline void close() { mWindow->close(); }
    inline void clear() { mWindow->clear(); }
    void clear(uint8_t r, uint8_t g, uint8_t b);
    void clear(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
    inline void display() { mWindow->display(); }

    inline void draw(const sf::Drawable& drawable) { mWindow->draw(drawable); }

    bool pollEvent(sf::Event& event);

    [[nodiscard]] inline sf::Vector2<int32_t> getMousePosition() {
        return sf::Mouse::getPosition(*mWindow);
    }
    [[nodiscard]] inline bool isOpen() const { return mWindow->isOpen(); }

    Window(uint32_t width, uint32_t height, const String& title);
    ~Window() = default;
};
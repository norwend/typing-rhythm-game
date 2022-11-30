#include <Window.hh>

Window::Window(uint32_t width, uint32_t height, const String& title) {
    this->mVideoMode.width = width;
    this->mVideoMode.height = height;
    this->mTitle = title;
    this->mStyle = sf::Style::Close | sf::Style::Titlebar;
    mWindow = std::make_shared<sf::RenderWindow>(mVideoMode, mTitle, mStyle);
}

void Window::changeSize(uint32_t width, uint32_t height) {
    this->mVideoMode.width = width;
    this->mVideoMode.height = height;
    recreateWindow(mVideoMode);
}

void Window::toggleFullscreen() {
    if (mStyle != sf::Style::Fullscreen) {
        mStyle = sf::Style::Fullscreen;
        recreateWindow(sf::VideoMode::getDesktopMode());
    } else {
        mStyle = sf::Style::Close | sf::Style::Titlebar;
        recreateWindow(mVideoMode);
    }
}

bool Window::pollEvent(sf::Event &event) {
    return this->mWindow->pollEvent(event);
}

void Window::recreateWindow(sf::VideoMode videoMode) {
    this->mWindow->create(videoMode, mTitle, mStyle);
}

void Window::clear(uint8_t r, uint8_t g, uint8_t b) { mWindow->clear({r, g, b}); }
void Window::clear(uint8_t r, uint8_t g, uint8_t b, uint8_t a) { mWindow->clear({r, g, b, a}); }

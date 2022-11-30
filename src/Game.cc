#include <Game.hh>
#include <iostream>

Game::Game() : mWindow(1280, 720, GAME_NAME) {

}

Game::~Game() {

}

void Game::update() {
    this->pollEvents();
}

void Game::render() {
    this->mWindow.clear();

    this->mWindow.display();
}

void Game::run() {
    while (mWindow.isOpen()) {

        this->update();

        this->render();
    }
}

void Game::pollEvents() {
    while (this->mWindow.pollEvent(this->mEvent)) {
        switch (this->mEvent.type) {
            case sf::Event::Closed:
                this->mWindow.close();
                break;
            case sf::Event::KeyPressed:
                switch (this->mEvent.key.code) {
                    case sf::Keyboard::Escape:
                        this->mWindow.close();
                        break;
                    case sf::Keyboard::E:
                        this->mWindow.toggleFullscreen();
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }
}

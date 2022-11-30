#pragma once

#include "Drawable.hh"
#include "SFML/Graphics/Color.hpp"

/* TODO:
 * сделать текст светящимся при нажатии верной клавиши;
 * функция highlightLetter() должна быть! её надо будет менять!;
 * сделать GameTextInput;
 * для обычного GUI использовать обычный sf::Text.
 * */

class GameTextOutput : public Drawable {
private:
    int x;
    int y;
    int mCharSize;
    sf::Color mColor;
public:

};

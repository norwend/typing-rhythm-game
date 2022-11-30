#pragma once
#include <SFML/Graphics/Font.hpp>
#include <Interfaces.hh>

class Font {
private:
    sf::Font mFont;
    uint32_t mStyle;
public:
    Font(const char* fileName, uint32_t style);

    const sf::Font& getFont() const {
        return mFont;
    }
    void setFont(const sf::Font &font) {
        mFont = font;
    }

    uint32_t getStyle() const {
        return mStyle;
    }

    void setStyle(uint32_t style) {
        mStyle = style;
    }
};

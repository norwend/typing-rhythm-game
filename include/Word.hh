#pragma once
#include <string>

#include <SFML/Graphics.hpp>

#include <Interfaces.hh>
#include <Font.hh>

using String = std::string;

class Word: public DrawObject {
private:
    uint64_t mLength;
    String mContents;
    Font mFont;
    sf::Text mText;
    sf::Color mColor;
public:
    Word(const Font& font,
         const String& contents,
         const sf::Color& color,
         uint32_t textSize,
         float x,
         float y);

    void draw(WinPtr window) const override;
};

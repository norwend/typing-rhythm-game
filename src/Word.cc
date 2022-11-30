#include <Word.hh>

Word::Word(const Font& font,
           const String& contents,
           const sf::Color& color,
           uint32_t textSize,
           float x,
           float y)
    : mContents(contents), mFont(font), mColor(color) {
    mLength = mContents.length();
    mText = sf::Text(contents, mFont.getFont(), textSize);
    mText.setStyle(mFont.getStyle());
    mText.setPosition(x, y);
}
void Word::draw(WinPtr window) const {
    window->draw(mText);
}

#include <Font.hh>

Font::Font(const char* fileName, uint32_t style) : mStyle(style) {
    mFont.loadFromFile(fileName);
}

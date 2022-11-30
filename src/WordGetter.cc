#include <WordGetter.hh>

void WordGetter::importWords(const String& filePath) {
    mWordVector.clear();
    std::fstream file(filePath);

    while(!file.eof()) {
        String str;
        file >> str;
        mWordVector.push_back(str);
    }
}

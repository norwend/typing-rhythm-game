#pragma once
#include <fstream>
#include <vector>
#include <string>

using String = std::string;
using StrVec = std::vector<String>;

class WordGetter {
public:
    [[nodiscard]] StrVec getWords() const { return mWordVector; }
    void importWords(const String& filePath);
private:
    StrVec mWordVector;
};

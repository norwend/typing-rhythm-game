#include <AudioHandler.hh>

void AudioHandler::play(const String& fileName) {
    if (!mMusic.openFromFile(fileName)) {
        throw std::runtime_error("wrong music file: " + fileName);
    }
    mMusic.play();
}

void AudioHandler::stop() {
    if (mMusic.getStatus() == sf::SoundSource::Playing) mMusic.stop();
}

bool AudioHandler::isPlaying() {
    auto status = mMusic.getStatus();
    switch (status) {
        case sf::Music::Status::Playing:
        case sf::Music::Status::Paused:
            return true;
        case sf::Music::Status::Stopped:
            return false;
    }
}

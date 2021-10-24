#include "Utils.hpp"

namespace Scrabble {

    std::random_device Utils::device;
    std::mt19937 Utils::generator(device());

    uint8_t Utils::getRandom(uint8_t lowerBound, uint8_t upperBound) {
        std::uniform_int_distribution<uint8_t> distribution(lowerBound, upperBound);
        return distribution(generator);
    }
}
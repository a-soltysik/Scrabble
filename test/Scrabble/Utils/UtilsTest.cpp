#include "gtest/gtest.h"

#include "../src/Scrabble/Utils/Utils.hpp"

TEST(UtilsTest, getRandomTest) {
    uint8_t lowerBound = 0;
    uint8_t upperBound = 20;
    auto number = Scrabble::Utils::getRandom(lowerBound, upperBound);
}
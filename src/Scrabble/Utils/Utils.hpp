#pragma once

#include <random>

namespace Scrabble {
    class Utils
    {
    private:
        static std::random_device device;
        static std::mt19937 generator;

    public:
        Utils() = delete;
        ~Utils() = default;
        Utils(Utils&) = delete;
        Utils(Utils&&) = delete;
        Utils& operator=(Utils&) = delete;

        static uint8_t getRandom(uint8_t lowerBound, uint8_t upperBound);

    };
}
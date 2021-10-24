#pragma once

#include <unordered_map>

namespace Scrabble {

    class Bag
    {
    private:
        using LetterMap = std::unordered_map<wchar_t, uint8_t>;

        static const LetterMap POLISH_BAG;
        static constexpr wchar_t EMPTY_BAG = L'\0';

        LetterMap letters;
        std::wstring lettersString;
    public:
        Bag(LetterMap letters = POLISH_BAG);
        ~Bag() = default;
        Bag(const Bag&) = default;
        Bag(Bag&&) = default;
        Bag& operator= (const Bag&) = default;

        wchar_t getRandomLetter();
        void resetBag();
    };
}
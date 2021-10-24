#include "Bag.hpp"
#include "Utils/Utils.hpp"

namespace Scrabble {
    const Bag::LetterMap Bag::POLISH_BAG = {
        {L'A', 9}, {L'Ą', 1}, {L'B', 2},
        {L'C', 3}, {L'Ć', 1}, {L'D', 3},
        {L'E', 7}, {L'Ę', 1}, {L'F', 1},
        {L'G', 2}, {L'H', 2}, {L'I', 8},
        {L'J', 2}, {L'K', 3}, {L'L', 3},
        {L'Ł', 2}, {L'M', 3}, {L'N', 5},
        {L'Ń', 1}, {L'O', 6}, {L'Ó', 1}, 
        {L'P', 3}, {L'R', 4}, {L'S', 4},
        {L'Ś', 1}, {L'T', 3}, {L'U', 2},
        {L'W', 4}, {L'Y', 4}, {L'Z', 5},
        {L'Ź', 1}, {L'Ż', 1}, {L' ', 2}
    };

    Bag::Bag(Bag::LetterMap letters) : letters(letters)
    {
        resetBag();
    }

    wchar_t Bag::getRandomLetter()
    {
        if (lettersString.length() == 0)
        {
            return EMPTY_BAG;
        }
        uint8_t index = Utils::getRandom(0, lettersString.length());
        wchar_t result = lettersString[index];
        lettersString.erase(lettersString.begin() + index);
        return result;
    }

    void Bag::resetBag()
    {
        lettersString.clear();
        for (const auto& letter : letters)
        {
            for (uint8_t i = 0; i < letter.second; i++)
            {
                lettersString += letter.first;
            }
        }
    }
}
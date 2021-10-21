#pragma once

#include <ostream>

namespace Scrabble {
    struct FieldInfo
    {
        enum Premium
        {
            DOUBLE_LETTER, TRIPLE_LETTER, DOUBLE_WORD, TRIPLE_WORD, NONE
        };
        wchar_t letter = L'\0';
        const Premium premium;
        const uint8_t row;
        const uint8_t column;

        FieldInfo(uint8_t row, uint8_t column, Premium premium = Premium::NONE)
            : row(row), column(column), premium(premium)
        {
        }
    };
    std::wostream& operator << (std::wostream& os, const FieldInfo::Premium& premium);

    std::wostream& operator << (std::wostream& os, const FieldInfo& FieldInfo);
}
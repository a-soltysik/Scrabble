#include "FieldInfo.hpp"

namespace Scrabble
{
    std::wostream& operator << (std::wostream& os, const FieldInfo::Premium& premium)
    {
        switch (premium)
        {
        case FieldInfo::Premium::NONE:
            os << L" ";
            break;
        case FieldInfo::Premium::DOUBLE_LETTER:
            os << L"DL";
            break;
        case FieldInfo::Premium::TRIPLE_LETTER:
            os << L"TL";
            break;
        case FieldInfo::Premium::DOUBLE_WORD:
            os << L"DW";
            break;
        case FieldInfo::Premium::TRIPLE_WORD:
            os << L"TW";
            break;
        default:
            os << L"\0";
            break;
        }
        return os;
    }

    std::wostream& operator << (std::wostream& os, const FieldInfo& fieldInfo)
    {
        if (fieldInfo.letter) 
        {
            os << fieldInfo.letter;
        }
        else 
        {
            os << fieldInfo.premium;
        }
        return os;
    }
}
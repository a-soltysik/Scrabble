#pragma once

#include "FieldInfo.hpp"

#include <vector>

namespace Scrabble
{
    constexpr uint8_t BOARD_SIZE = 15;
    using BoardFields = std::vector<std::vector<FieldInfo>>;

    class Board
    {
    private:
        BoardFields boardFields;
    public:
        Board();

        friend std::wostream& operator << (std::wostream& os, const Board& board);
    };



}
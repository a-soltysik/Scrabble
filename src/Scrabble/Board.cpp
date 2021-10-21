#include "Board.hpp"

namespace Scrabble {

    Board::Board()
    {
        boardFields.reserve(BOARD_SIZE);
        for (uint8_t row = 0; row < BOARD_SIZE; row++) {
            boardFields.emplace_back();
            boardFields[row].reserve(BOARD_SIZE);

            for (uint8_t column = 0; column < BOARD_SIZE; column++) {
                boardFields[row].emplace_back(row, column);
            }
        }
    }
    std::wostream& operator << (std::wostream& os, const Board& board)
    {
        for (const auto& row : board.boardFields) {
            for (uint8_t i = 0; i < row.size(); i++) {
                os << L"--";
            }
            os << L"\n";
            for (const auto& field : row) {
                os << field << L"|";
            }
            os << L"\n";
        }
        return os;
    }
}

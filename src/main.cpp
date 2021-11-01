#include <iostream>
#include "Scrabble/Board.hpp"

#ifndef TEST
int main()
{
    setlocale(LC_ALL, "");
    Scrabble::Board board;
    std::wcout << board;

    return 0;
}
#endif

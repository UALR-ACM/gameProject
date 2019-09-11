#include "board.hpp"

board::board()
  : gameBoard{{0,0,0}, {0,0,0}, {0,0,0}},
    gameState{0}
{}

board::board(const board& copy)
  : gameState{copy.gameState},
    gameBoard{copy.gameBoard[3][3]}
{}

board::~board()
{}

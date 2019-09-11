class board {
public:
  /**
   * [][][]
   * [][][]
   * [][][]
   **/
  int gameBoard [3][3];

  /**
   * 0 == active game
   * 1 == player1 win
   * 2 == player2 win
   * 3 == cat win
   **/
  int gameState = 0;

  //Default Constructor
  board();

  //Copy Constructor
  board(const board& copy);

  //Deconstructor
  ~board();
};

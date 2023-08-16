#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

class TicTacToe {
public:
    TicTacToe();
    void clearBoard();
    void putMark(int i, int j);
    bool isWin(int mark);
    int getWinner();
    void printBoard();

private:
    static const int X = 1;
    static const int O = -1;
    static const int EMPTY = 0;
    int board[3][3];
    int currentPlayer;
};

#endif // TICTACTOE_HPP

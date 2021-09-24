#include <iostream>
#include <vector>

/**
 * Creates an empty board, with values initialized to -1;
 * @returns 2D vector of integers
 */
std::vector<std::vector<int> > CreateBoard() {
    std::vector<int> inner;
    for (int i = 0; i < 3; i++) {
        inner.push_back(-1);
    }

    std::vector<std::vector<int> > outer;
    for (int i = 0; i < 3; i++) {
        outer.push_back(inner);
    }

    return outer;
}

/**
 * Prints board contents.
 * @param board Board
 */
void DisplayBoard(std::vector<std::vector<int> > board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char c;
            switch (board[i][j]) {
                case -1:
                    c = '.';
                    break;
                case 0:
                    c = 'X';
                    break;
                case 1:
                    c = 'O';
            }
            std::cout << c << ' ';
        }
        std::cout << std::endl;
    }
}

/**
 * Places marker in given location on board.
 * @param board Board
 * @param pos Integer vector containing row and column of cell to be updated
 * @param num 0 for X, 1 for Y
 */
void PlaceMarker(std::vector<std::vector<int> > &board, std::vector<int> pos, int num) {
    board[pos[0]][pos[1]] = num;
}

int main() {
    std::vector<std::vector<int> > board = CreateBoard();
    DisplayBoard(board);
}
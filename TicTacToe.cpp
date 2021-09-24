#include <iostream>
#include <vector>

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

int main() { 
    std::vector<std::vector<int> > board = CreateBoard(); 
    DisplayBoard(board);
}
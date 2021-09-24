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

void DisplayBoard(std::vector<std::vector<int>> vec) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 3; i++) {
            if (vec[i][j] == 0) {
                std::cout << " ";
            } else if (vec[i][j] == 1) {
                std::cout << "X";
            } else {
                std::cout << "O";
            }
        }
    }
}

int main() { 
    std::vector<std::vector<int> > board = CreateBoard(); 
    DisplayBoard(board);
}
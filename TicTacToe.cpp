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

int main() { 
    std::vector<std::vector<int> > board = CreateBoard(); 
}
// question 15
#include <iostream>
using namespace std;

const int N = 8;
int board[N];

bool isSafe(int row, int col) {		// This function checks whether two queens threaten each other or not
    for (int i = 0; i < row; i++) {
        if (board[i] == col || (board[i] - i == col - row) || (board[i] + i == col + row)) {		// Checking the threat of queens by each other in a row or column or diagonal
            return false;
        }
    }
    return true;
}

void placeQueens(int row) {		// This function displays the ideal positions of the queens on the page
    if (row == N) {
        for (int i = 0; i < N; i++) {			// print chest board
            for (int j = 0; j < N; j++) {
                if (board[i] == j)
                    cout << "Q ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            placeQueens(row + 1);		// recursive part
        }
    }
}

int main() {
    placeQueens(0);		// calling recursive function for first place
    return 0;
}

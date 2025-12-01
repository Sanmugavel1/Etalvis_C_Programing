#include <stdio.h>
#include <stdlib.h>

#define N 8

int board[N];
int found = 0;

int isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row)) return 0;
    }
    return 1;
}

void printSolution() {
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (board[r] == c) printf("Q ");
            else printf(". ");
        }
        printf("\n");
    }
}

void solve(int row) {
    if (row == N) {
        if (!found) {
            printSolution();
            found = 1;
        }
        return;
    }
    for (int col = 0; col < N && !found; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    solve(0);
    return 0;
}


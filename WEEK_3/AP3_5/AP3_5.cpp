#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void tromino(int n, int x, int y, int startX, int startY, vector<vector<int> >& board, int& tile) {
    if (n == 2) {
        int currentNum = tile++;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (startX + i == x && startY + j == y) continue;
                board[startX + i][startY + j] = currentNum;
            }
        }
        return;
    }

    int m = n/2;
    int midX = startX + m;
    int midY = startY + m;

    if (x < midX && y < midY) {
        board[midX-1][midY] = tile;
        board[midX][midY-1] = tile;
        board[midX][midY] = tile;
        tile++;

        tromino(m, x, y, startX, startY, board, tile);
        tromino(m, midX-1, midY, startX, startY+m, board, tile);
        tromino(m, midX, midY-1, startX+m, startY, board, tile);
        tromino(m, midX, midY, startX+m, startY+m, board, tile);
    }
    else if (x < midX && y >= midY) {
        board[midX-1][midY-1] = tile;
        board[midX][midY-1] = tile;
        board[midX][midY] = tile;
        tile++;

        tromino(m, midX-1, midY-1, startX, startY, board, tile);
        tromino(m, x, y, startX, startY+m, board, tile);
        tromino(m, midX, midY-1, startX+m, startY, board, tile);
        tromino(m, midX, midY, startX+m, startY+m, board, tile);
    }
    else if (x >= midX && y < midY) {
        board[midX-1][midY-1] = tile;
        board[midX-1][midY] = tile;
        board[midX][midY] = tile;
        tile++;

        tromino(m, midX-1, midY-1, startX, startY, board, tile);
        tromino(m, midX-1, midY, startX, startY+m, board, tile);
        tromino(m, x, y, startX+m, startY, board, tile);
        tromino(m, midX, midY, startX+m, startY+m, board, tile);
    }
    else {
        board[midX-1][midY-1] = tile;
        board[midX-1][midY] = tile;
        board[midX][midY-1] = tile;
        tile++;

        tromino(m, midX-1, midY-1, startX, startY, board, tile);
        tromino(m, midX-1, midY, startX, startY+m, board, tile);
        tromino(m, midX, midY-1, startX+m, startY, board, tile);
        tromino(m, x, y, startX+m, startY+m, board, tile);
    }
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<vector<int> > board(n, vector<int>(n, 0));
    board[x][y] = 0;
    
    int tile = 1;
    tromino(n, x, y, 0, 0, board, tile);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j];
            if (j < n-1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int board[8][8];

void hop(int currentX, int currentY, int steps){
    if(currentX >= 0 && currentX < 8 && currentY >= 0 && currentY < 8 && steps < board[currentX][currentY]){
            board[currentX][currentY] = steps;
            hop(currentX-1, currentY+2, steps+1);
            hop(currentX-1, currentY-2, steps+1);
            hop(currentX+1, currentY+2, steps+1);
            hop(currentX+1, currentY-2, steps+1); 
            hop(currentX-2, currentY+1, steps+1);
            hop(currentX-2, currentY-1, steps+1);
            hop(currentX+2, currentY+1, steps+1);
            hop(currentX+2, currentY-1, steps+1);
    }
}

int main() {
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            board[i][j] = 100000;
        }
    }
    int startX, startY, endX, endY;
    cin >> startX >> startY >> endX >> endY;
    hop(startX-1, startY-1, 0);
    cout << board[endX-1][endY-1] << endl;
}

#include <bits/stdc++.h>

using namespace std;

char grid[376][81];
vector<char> moves;
int r, c;

void check(int startX, int startY, char direction){
	bool works = true;
    for(int i = 0; i < moves.size(); i++){
        if(direction == 'N'){
            if(moves[i] == 'F' && startX-1 >= 0 && startX-1 < r && grid[startX-1][startY] != 'X') startX--;
            else if(moves[i] == 'R') direction = 'E';
            else if(moves[i] == 'L') direction = 'W';
			else if(startX-1 < 0 || startX-1 >= r || grid[startX-1][startY] == 'X'){works = false; break;}
        }
        else if(direction == 'E'){
            if(moves[i] == 'F' && startY+1 < c && startY+1 >= 0 && grid[startX][startY+1] != 'X') startY++;
            else if(moves[i] == 'R') direction = 'S';
            else if(moves[i] == 'L') direction = 'N';
            else if(startY+1 >= c || startY+1 < 0 || grid[startX][startY+1] == 'X'){works = false; break;}
        }
        else if(direction == 'S'){
            if(moves[i] == 'F' && startX+1 < r && startX+1 >= 0 && grid[startX+1][startY] != 'X') startX++;
            else if(moves[i] == 'R') direction = 'W';
            else if(moves[i] == 'L') direction = 'E';
			else if(startX+1 >= r || startX+1 < 0 ||grid[startX+1][startY] == 'X'){works = false; break;}
        }
        else if(direction == 'W'){
            if(moves[i] == 'F' && startY-1 >= 0 && startY-1 < c && grid[startX][startY-1] != 'X') startY--;
            else if(moves[i] == 'R') direction = 'N';
            else if(moves[i] == 'L') direction = 'S';
			else if(startY-1 < 0 || startY-1 >= c || grid[startX][startY-1] == 'X'){works = false; break;}
        }
    }
	if(works) grid[startX][startY] = '*';
}


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int numMoves;
    
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> grid[i][j];
        }
    }
    cin >> numMoves;
    for(int i = 0; i < numMoves; i++){
        char temp;
        cin >> temp;
        moves.push_back(temp);
    }
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(grid[i][j] == '.' || grid[i][j] == '*'){
                check(i, j, 'N');
                check(i, j, 'E');
                check(i, j, 'S');
                check(i, j, 'W');
            }
        }
    }
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << grid[i][j];
        }
		cout << endl;
    }
}

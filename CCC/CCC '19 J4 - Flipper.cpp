#include <bits/stdc++.h>

using namespace std;

int grid[2][2] = {1, 2, 3, 4};

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string t;
    
    cin >> t;
    int length = t.length();
    for(int i = 0; i < length; i++){
        if(t[i] == 'V'){
            int holder1 = grid[0][0], holder2 = grid[1][0];
            grid[0][0] = grid[0][1];
            grid[1][0] = grid[1][1];
            grid[0][1] = holder1;
            grid[1][1] = holder2;
        }
        else{
            int holder1 = grid[0][0], holder2 = grid[0][1];
            grid[0][0] = grid[1][0];
            grid[0][1] = grid[1][1];
            grid[1][0] = holder1;
            grid[1][1] = holder2;
        }
    }
    
    cout << grid[0][0] << " " << grid[0][1] << endl << grid[1][0] << " " << grid[1][1] << endl;
}

#include <iostream>

using namespace std;

bool rows(int square[4][4]){
    int sum = square[0][0] + square[0][1] + square[0][2] + square[0][3];
    
    for(int i = 1; i < 4; i++){
        if(square[i][0] + square[i][1] + square[i][2] + square[i][3] != sum){
            return false;
        }
    }
    return true;
}

bool columns(int square[4][4]){
    int sum = square[0][0] + square[1][0] + square[2][0] + square[3][0];
    
    for(int i = 1; i < 4; i++){
        if(square[0][i] + square[1][i] + square[2][i] + square[3][i] != sum){
            return false;
        }
    }
    return true;
}

int main() {
    int square[4][4];
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> square[i][j];
        }
    }
    
    if(rows(square) == true && columns(square) == true){
        cout << "magic" << endl;
    }
    else{
        cout << "not magic" << endl;
    }
}

#include <iostream>

using namespace std;

int main() {
    int wins = 0;
    
    for(int i = 0; i < 6; i++){
        char temp;
        cin >> temp;
        if(temp == 'W'){
            wins++;
        }
    }
    
    if(wins == 5 || wins == 6){
        cout << "1";
    }
    else if(wins == 4 || wins == 3){
        cout << "2";
    }
    else if(wins == 1 || wins == 2){
        cout << "3";
    }
    else{
        cout << "-1";
    }
}

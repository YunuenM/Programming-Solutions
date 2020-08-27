#include <bits/stdc++.h>

using namespace std;

char keypad[9][3] = {' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 't', 'u', 'v', 'w', 'x', 'y'};

vector<int> find(char letter){
    vector<int> position;
    
    for(int i = 1; i < 9; i++){
        for(int j = 0; j < 3; j++){
            if(letter == keypad[i][j]){
                position.push_back(i);
                position.push_back(j);
                return position;
            }
        }
    }
    if(letter == 'z'){
        position.push_back(8);
        position.push_back(3);
    }
    else if(letter == 's'){
        position.push_back(6);
        position.push_back(3);
    }
    return position;
}

int check(string word){
    int counter = 0;
    vector<int> num;
    
    for(int i = 0; i < word.length(); i++){
        vector<int> positions = find(word[i]);
        num.push_back(positions[0]);
        counter += positions[1] + 1;
        if(i > 0){
            if(num[i-1] == positions[0]){
                counter += 2;
            }
        }
    }
    return counter;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(1){
        string word;
        cin >> word;
        if(word == "halt"){
            break;
        }
        cout << check(word) << endl;
    }
}

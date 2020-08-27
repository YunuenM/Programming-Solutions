#include <bits/stdc++.h>

using namespace std;

char keypad[5][6] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '-', '.', '~'};

pair<int,int> find(char letter){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            if(letter == keypad[i][j]){
                pair<int,int> temp(i, j);
                return temp;
            }
        }
    }
}

int main() {
    string word;
    int counter = 0;
    
    getline(cin, word);
    pair<int,int> begin(0, 0);
    for(int i = 0; i < word.length(); i++){
        pair<int,int> second;
        second = find(word[i]);
        counter += abs(begin.second - second.second);
        counter += abs(begin.first - second.first);
        begin = second;
    }
    counter += abs(begin.second - 5);
    counter += abs(begin.first - 4);
    
    cout << counter << endl;
}

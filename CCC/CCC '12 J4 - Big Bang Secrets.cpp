#include <bits/stdc++.h>

using namespace std;

char decode(int move, char letter){
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t found = alphabet.find(letter);
    if(found != string::npos){
        int find = found;
        if(find - move >= 0){
            int t = find - move;
            return alphabet[t];
        }
        else{
            int temp = find - move + 26;
            return alphabet[temp];
        }
    }
    return '*';
}

int main() {
    int K;
    string message;
    
    cin >> K >> message;
    for(int i = 0; i < message.length(); i++){
        int move = 3*(i+1) + K;
        cout << decode(move, message[i]);
    }
    cout << endl;
}

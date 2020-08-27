#include <bits/stdc++.h>

using namespace std;
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char shift(char shifted, char key){
    size_t found = alphabet.find(key);
    if(found != string::npos){
        size_t check = alphabet.find(shifted);
        int pos = check, sh = found;
        pos += sh;
        if(pos > 25){
            pos -= 26;
        }
        return alphabet[pos];
    }
}

int main() {
    string key, message;
    vector<char> letters;
    
    getline(cin, key);
    getline(cin, message);
    for(int i = 0; i < message.length(); i++){
        if(isalpha(message[i])){
            letters.push_back(message[i]);
        }
    }

    int counter = 0;
    for(int i = 0; i < letters.size(); i++){
        cout << shift(letters[i], key[counter]);
        if(counter + 1 >= key.length()){
            counter = 0;
        }
        else{
            counter++;
        }
    }
    cout << endl;
}

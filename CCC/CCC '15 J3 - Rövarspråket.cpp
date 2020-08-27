#include <bits/stdc++.h>

using namespace std;

int position(char letter){
    string alphabet = "bcdfghjklmnpqrstvwxyz";
    
    size_t found = alphabet.find(letter);
    if(found != string::npos){
        return found;
    }
    return -1;
}

int main() {
    string closestVowel = "aaeeeiiiiooooouuuuuuu", nextCon = "cdfghjklmnpqrstvwxyzz", word;
    
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        int where = position(word[i]);
        if(where != -1){
            cout << word[i] << closestVowel[where] << nextCon[where];
        }
        else{
            cout << word[i];
        }
    }
    cout << endl;
}

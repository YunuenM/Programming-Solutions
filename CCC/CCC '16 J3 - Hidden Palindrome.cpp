#include <bits/stdc++.h>

using namespace std;

bool checkPalin(string word){
    int counter = 0;
    for(int i = word.length()-1; i >= 0; i--){
        if(word[i] != word[counter]){
            return false;
        }
        counter++;
    }
    return true;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string word;
    int biggest = 1;
    
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        string part;
        part += word[i];
        for(int j = i+1; j < word.length(); j++){
            part += word[j];
            if(checkPalin(part)){
                if(part.length() > biggest){
                    biggest = part.length();
                }
            }
        }
    }
    
    cout << biggest << endl;
}

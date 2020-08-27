#include <iostream>
#include <string>

using namespace std;

bool checkVowel(char letter){
    char vowel[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    
    for(int i = 0; i < 6; i++){
        if(letter == vowel[i]){
            return true;
        }
    }
    return false;
}

int main() {
    string word;
    
    cin >> word;
    while(word != "quit!"){
        bool print = false;
        int length = word.length();
        if(length > 4 && checkVowel(word[length-3]) == false){
            if(word[length-1] == 'r' && word[length-2] == 'o'){
                for(int i = 0; i < length-2; i++){
                    cout << word[i];
                }
                cout << "our" << endl;
                print = true;
            }
        }
        if(!print){
            cout << word << endl;
        }
        cin >> word;
    }
}

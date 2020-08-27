#include <string>
#include <iostream>

using namespace std;

bool check(char letter){
    char works[7] = {'I', 'O', 'S', 'H', 'Z', 'X', 'N'};
    
    for(int i = 0; i < 7; i++){
        if(letter == works[i]){
            return true;
        }
    }
    return false;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string word;
    
    cin >> word;
    int length = word.length();
    for(int i = 0; i < length; i++){
        if(check(word[i]) == false){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

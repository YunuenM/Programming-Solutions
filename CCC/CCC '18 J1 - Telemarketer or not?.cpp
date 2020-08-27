#include <iostream>

using namespace std;

int main() {
    int digits[4];
    
    for(int i = 0; i < 4; i++){
        cin >> digits[i];
    }
    
    if(digits[0] == 8 || digits[0] == 9){
        if(digits[3] == 8 || digits[3] == 9){
            if(digits[2] == digits[1]){
                cout << "ignore";
            }
            else{
                cout << "answer";
            }
        }
        else{
            cout << "answer";
        }
    }
    else{
        cout << "answer";
    }
}

#include <iostream>

using namespace std;

int main() {
    int spot = 1;
    
    while(1){
        int temp;
        cin >> temp;
        if(temp == 0){
            cout << "You Quit!";
            return 0;
        }
        if(spot + temp <= 100){
            spot += temp;
        }
        if(spot == 54){
            spot = 19;
        }
        if(spot == 90){
            spot = 48;
        }
        if(spot == 99){
            spot = 77;
        }
        if(spot == 9){
            spot = 34;
        }
        if(spot == 40){
            spot = 64;
        }
        if(spot == 67){
            spot = 86;
        }
        cout << "You are now on square " << spot << endl;
        if(spot >= 100){
            cout << "You Win!";
            return 0;
        }
    }
}

#include <iostream>

using namespace std;

int main() {
    int limit, speed;
    
    cin >> limit >> speed;
    if(speed <= limit){
        cout << "Congratulations, you are within the speed limit!";
    }
    else{
        if((speed-limit) <= 20){
            cout << "You are speeding and your fine is $100.";
        }
        else if((speed-limit) <= 30){
            cout << "You are speeding and your fine is $270.";
        }
        else{
            cout << "You are speeding and your fine is $500.";
        }
    }
}

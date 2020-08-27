#include <iostream>

using namespace std;

int main() {
    double A, B;
    double day, night, wkend;
    
    cin >> day >> night >> wkend;
    A = 0.15*night + 0.20*wkend;
    B = 0.35*night + 0.25*wkend;
    if(day > 100){
        A += (day - 100)*0.25;
    }
    if(day > 250){
        B += (day - 250)*0.45;
    }
    
    if(A < B){
        cout << "Plan A costs " << A << endl;
        cout << "Plan B costs " << B << endl;
        cout << "Plan A is cheapest.";
    }
    else if(B < A){
        cout << "Plan A costs " << A << endl;
        cout << "Plan B costs " << B << endl;
        cout << "Plan B is cheapest.";
    }
    else{
        cout << "Plan A costs " << A << endl;
        cout << "Plan B costs " << B << endl;
        cout << "Plan A and B are the same price.";
    }
}

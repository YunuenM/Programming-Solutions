#include <iostream>

using namespace std;

int main() {
    int s, h, t;
    
    cin >> t >> s >> h;
    for(int i = 0; i < t; i++){
        cout << "*";
        for(int j = 0; j < s; j++){
            cout << " ";
        }
        cout << "*";
        for(int j = 0; j < s; j++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    
    for(int i = 0; i < 2*s+3; i++){
        cout << "*";
    }
    cout << endl;
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < s+1; j++){
            cout << " ";
        }
        cout << "*" << endl;
    }
}

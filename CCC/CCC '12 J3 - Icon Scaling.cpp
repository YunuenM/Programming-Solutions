#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "*";
        }
        for(int j = 0; j < N; j++){
            cout << "x";
        }
        for(int j = 0; j < N; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << " ";
        }
        for(int j = 0; j < N; j++){
            cout << "x";
        }
        for(int j = 0; j < N; j++){
            cout << "x";
        }
        cout << endl;
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "*";
        }
        for(int j = 0; j < N; j++){
            cout << " ";
        }
        for(int j = 0; j < N; j++){
            cout << "*";
        }
        cout << endl;
    }
}

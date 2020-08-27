#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, counter = 1;
    
    cin >> N;
    for(int i = 0; i < (N+1)/2; i++){
        for(int j = 0; j < counter; j++){
            cout << "*";
        }
        for(int j = 0; j < 2*N - 2*counter; j++){
            cout << " ";
        }
        for(int j = 0; j < counter; j++){
            cout << "*";
        }
        cout << endl;
        counter += 2;
    }
    
    counter = counter - 4;
    for(int i = 0; i < N/2; i++){
        for(int j = 0; j < counter; j++){
            cout << "*";
        }
        for(int j = 0; j < 2*N - 2*counter; j++){
            cout << " ";
        }
        for(int j = 0; j < counter; j++){
            cout << "*";
        }
        cout << endl;
        counter -= 2;
    }
}

#include <bits/stdc++.h>

using namespace std;

int height(int h, int t){
    return (-6 * t * t * t * t) + (h * t * t * t) + (2 * t * t) + t;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h, t;
    
    cin >> h >> t;
    for(int i = 1; i <= t; i++){
        if(height(h, i) <= 0){
            cout << "The balloon first touches ground at hour:" << endl << i << endl;
            return 0;
        }
    }
    cout << "The balloon does not touch ground in the given time." << endl;
}

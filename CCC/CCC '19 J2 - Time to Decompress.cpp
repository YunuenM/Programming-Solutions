#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        char c;
        cin >> num >> c;
        for(int j = 0; j < num; j++){
            cout << c;
        }
        cout << endl;
    }
}

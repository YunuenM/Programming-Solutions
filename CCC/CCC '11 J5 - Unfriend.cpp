#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, friends[6] = {1, 1, 1, 1, 1, 1};
    
    cin >> N;
    for(int i = 0; i < N-1; i++){
        int temp;
        cin >> temp;
        friends[temp-1] *= (1+friends[i]);
    }
    cout << friends[N-1] << endl;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int question, N;
    vector<int> Dmojistan, Pegland;
    
    cin >> question >> N;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        Dmojistan.push_back(temp);
    }
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        Pegland.push_back(temp);
    }
    sort(Dmojistan.begin(), Dmojistan.end());
    sort(Pegland.begin(), Pegland.end());
    
    switch(question){
        case 2:
        {
            int total = 0;
            for(int i = 0; i < N; i++){
                total += max(Dmojistan[i], Pegland[N-i-1]);
            }
            cout << total << endl;
            break;
        }
        case 1:
        {
            int min = 0;
            for(int j = 0; j < N; j++){
                min += max(Dmojistan[j], Pegland[j]);
            }
            cout << min << endl;
            break;
        }
    }
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T, C, countertime = 0, counter = 0;
    vector<int> chores;
    
    cin >> T >> C;
    for(int i = 0; i < C; i++){
        int temp;
        cin >> temp;
        chores.push_back(temp);
    }
    sort(chores.begin(), chores.end());
    
    for(int i = 0; i < C; i++){
        if(countertime + chores[i] <= T){
            counter++;
            countertime += chores[i];
        }
        else{
            break;
        }
    }
    cout << counter << endl;
}

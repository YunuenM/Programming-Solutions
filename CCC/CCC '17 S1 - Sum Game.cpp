#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    vector<int> sw, se;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        sw.push_back(temp);
    }
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        se.push_back(temp);
    }
    
    int cw = 0, ce = 0, counter = -1;
    for(int i = 0; i < N; i++){
        cw += sw[i];
        ce += se[i];
        if(ce == cw){
            counter = i;
        }
    }
    
    cout << counter+1 << endl;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int K, m;
    vector<int> invites;
    int rounds[10];
    
    cin >> K >> m;
    for(int i = 0; i < m; i++){
        cin >> rounds[i];
    }
    
    for(int i = 0; i < K; i++){
        invites.push_back(i+1);
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < invites.size(); j++){
            if((j+1) % rounds[i] == 0){
                invites[j] = 0;
            }
        }
        for(int j = 0; j < invites.size(); j++){
            if(invites[j] == 0){
                invites.erase(invites.begin()+j);
                j--;
            }
        }
    }
    
    for(int j = 0; j < invites.size(); j++){
        cout << invites[j] << endl;
    }
}

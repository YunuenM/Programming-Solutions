#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> partnerOne, partnerTwo;
    int N;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;
        partnerOne.push_back(temp);
    }
    
    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;
        partnerTwo.push_back(temp);
    }
    
    for(int i = 0; i < N; i++){
        vector<string>::iterator it = find(partnerTwo.begin(), partnerTwo.end(), partnerOne[i]);
        if(partnerOne[i] == partnerTwo[i]){
            cout << "bad" << endl;
            return 0;
        }
        if(it != partnerTwo.end()){
            int pos = distance(partnerTwo.begin(), it);
            if(partnerOne[pos] != partnerTwo[i]){
                cout << "bad" << endl;
                return 0;
            }
        }
    }
    cout << "good" << endl;
}

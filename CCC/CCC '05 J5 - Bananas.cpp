#include <bits/stdc++.h>

using namespace std;

bool check(string word){
    while(1){
        size_t ana = word.find("ANA"), bas = word.find("BAS");
        if(ana == string::npos && bas == string::npos){
            break;
        }
        
        while(ana != string::npos){
            word.replace(ana, 3, "A");
            ana = word.find("ANA");
        }
        
        while(bas != string::npos){
            word.replace(bas, 3, "A");
            bas = word.find("BAS");
        }
    }
    
    if(word == "A"){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(1){
        string temp;
        cin >> temp;
        if(temp == "X"){
            break;
        }
        
        if(check(temp)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

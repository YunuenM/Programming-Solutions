#include <bits/stdc++.h>

using namespace std;

bool w(int num){
    string temp = to_string(num);
    bool work = true;
    
    for(int i = 0; i <= temp.length()/2; i++){
        if(temp[i] == temp[temp.length()-1-i]){
            if(temp[i] == '0' || temp[i] == '1' || temp[i] == '8'){
                work = true;
            }
            else{
                return false;
            }
        }
        else if(temp[i] == '6' && temp[temp.length()-1-i] == '9'){
            work = true;
        }
        else if(temp[i] == '9' && temp[temp.length()-1-i] == '6'){
            work = true;
        }
        else{
            return false;
        }
    }
    
    if(num < 10){
        if(num == 8 || num == 1 || num == 0){
            return true;
        }
        return false;
    }
    
    if(temp.length() % 2 != 0){
        if(temp[temp.length()/2] != '1' && temp[temp.length()/2] != '0' && temp[temp.length()/2] != '8'){
            return false;
        }
    }
    
    
    if(work){
        return true;
    }
    return false;
}

int main() {
    int l, u, counter = 0;
    
    cin >> l >> u;
    for(int i = l; i <= u; i++){
        if(w(i)){
            counter++;
        }
    }
    cout << counter << endl;
}

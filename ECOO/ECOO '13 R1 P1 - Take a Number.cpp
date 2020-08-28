#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, late = 0, serve = 0;
    
    cin >> N;
    while(1){
        string temp;
        cin >> temp;
        if(temp == "EOF"){
            break;
        }
        else if(temp == "TAKE"){
            late++;
            serve++;
            N++;
            if(N == 1000){
                N = 1;
            }
        }
        else if(temp == "SERVE"){
            serve--;
        }
        else if(temp == "CLOSE"){
            cout << late << " " << serve << " " << N << endl;
            late = 0;
            serve = 0;
        }
    }
}

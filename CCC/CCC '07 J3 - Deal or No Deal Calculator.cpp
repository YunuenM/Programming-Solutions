#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases[10] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
    bool removed[10];
    int N, offer;
    double average;
    
    for(int i = 0; i < 10; i++){
        removed[i] = false;
    }
    cin >> N;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        removed[temp-1] = true;
    }
    cin >> offer;
    
    for(int i = 0; i < 10; i++){
        if(removed[i] == false){
            average += cases[i];
        }
    }
    
    if((average/(10-N))*1.0 > offer){
        cout << "no deal" << endl;
    }
    else{
        cout << "deal" << endl;
    }
}

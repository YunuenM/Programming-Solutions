#include <bits/stdc++.h>

using namespace std;

void simplify(int N, int D){
    int biggest = 1;
    
    for(int i = 2; i <= N; i++){
        if(N % i == 0 && D % i == 0 && i > biggest){
            biggest = i;
        }
    }
    cout << N / biggest << "/" << D / biggest << endl;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, D;
    
    cin >> N >> D;
    if(N % D == 0){
        cout << N / D << endl;
        return 0;
    }
    int remain = N % D;
    if((N-remain) / D != 0){
        cout << (N-remain) / D << " ";
        simplify(remain, D);
    }
    else{
        simplify(remain, D);
    }
}

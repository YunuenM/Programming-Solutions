#include <bits/stdc++.h>

using namespace std;

long long int dp[250][250][250] = {0};

long long int pi(int pieces, int people, int minimum){
    if(dp[people][pieces][minimum] == 0){
        if(people == pieces || people == 1) dp[people][pieces][minimum] = 1;
        else{
            long long int total = 0;
            for(int i = minimum; i < (pieces/people)+1; i++){
                total += pi(pieces-i, people-1, i);
            }
            dp[people][pieces][minimum] = total;
        }
    }
    return dp[people][pieces][minimum];
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << pi(n, k, 1) << endl;
}

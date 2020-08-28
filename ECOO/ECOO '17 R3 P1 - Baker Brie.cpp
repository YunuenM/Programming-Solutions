#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int k = 0; k < 10; k++){
        int F, D, sums[130] = {0}, counter = 0;
        cin >> F >> D;
        for(int i = 0; i < D; i++){
            int temp = 0;
            for(int j = 0; j < F; j++){
                int t;
                cin >> t;
                sums[j] += t;
                temp += t;
            }
            if(temp % 13 == 0){
                counter += (temp / 13);
            }
        }
        
        for(int i = 0; i < F; i++){
            if(sums[i] % 13 == 0){
                counter += (sums[i] / 13);
            }
        }
        cout << counter << endl;
    }
}

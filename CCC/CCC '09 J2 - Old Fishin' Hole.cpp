#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int bt, np, yp, points, counter = 0;
    
    cin >> bt >> np >> yp >> points;
    for(int i = 0; i <= points/bt; i++){
        for(int j = 0; j <= points/np; j++){
            for(int k = 0; k <= points/yp; k++){
                if((i*bt) + (j*np) + (k*yp) <= points){
                    if(i == 0 && i == j && i == k){
                    }
                    else{
                        cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel" << endl;
                        counter++;
                    }
                }
            }
        }
    }
    cout << "Number of ways to catch fish: " << counter << endl;
}

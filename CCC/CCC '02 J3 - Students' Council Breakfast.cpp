#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int bt, np, yp, ora, points, counter = 0, minimum = 100000;
     
    cin >> bt >> np >> yp >> ora >> points;
    for(int i = 0; i <= points/bt; i++){
        for(int j = 0; j <= points/np; j++){
            for(int k = 0; k <= points/yp; k++){
                for(int n = 0; n <= points/ora; n++){
                if((i*bt) + (j*np) + (k*yp) + (n*ora) == points){
                        if(i == 0 && i == j && i == k && i == n){
                        }
                        else{
                            cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << n << endl;
                            counter++;
                            if(i+j+k+n < minimum){
                                minimum = i + j + k + n;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "Total combinations is " << counter << "." << endl;
    cout << "Minimum number of tickets to print is " << minimum << "." << endl;
}

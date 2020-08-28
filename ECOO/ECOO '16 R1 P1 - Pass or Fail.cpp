#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int k = 0; k < 10; k++){
        int counter = 0, N;
        double W[4];
        cin >> W[0] >> W[1] >> W[2] >> W[3] >> N;
        for(int i = 0; i < N; i++){
            double grade = 0;
            for(int j = 0; j < 4; j++){
                double temp;
                cin >> temp;
                grade += temp * W[j];
            }
            if(grade >= 5000){
                counter++;
            }
        }
        cout << counter << endl;
    }
}

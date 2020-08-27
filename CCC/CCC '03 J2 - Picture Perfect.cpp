#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int smallest = 1000000, input, l, w;
    
    cin >> input;
    while(input != 0){
        for(int i = 1; i <= sqrt(input); i++){
            if(input % i == 0){
                if((i + input/i)*2 < smallest){
                    w = i;
                    l = input / i;
                    smallest = (i + input/i)*2;
                }
            }
        }
        cout << "Minimum perimeter is " << smallest << " with dimensions " << w << " x " << l << endl;
        cin >> input;
        smallest = 1000000;
    }
}

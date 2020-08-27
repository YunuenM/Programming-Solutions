#include <iostream>

using namespace std;

int main() {
    int N, k, sum = 0;
    
    cin >> N >> k;
    for(int i = 0; i < k+1; i++){
        sum += N;
        N = N * 10;
    }
    cout << sum;
}

#include <iostream>

using namespace std;

int main() {
    int N, ways = 0;
    cin >> N;
    
    for(int i = 0; i <= N/2; i++){
        int temp = N - i;
        if(temp < 6 && i < 6){
            ways++;
        }
    }
    cout << ways;
}

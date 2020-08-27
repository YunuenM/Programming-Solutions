#include <iostream>

using namespace std;

int main() {
    int m, n, ways = 0;
    
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(j+i == 10){
                ways++;
            }
        }
    }
    if(ways != 1){
        cout << "There are " << ways << " ways to get the sum 10.";
    }
    else{
        cout << "There is 1 way to get the sum 10.";
    }
}

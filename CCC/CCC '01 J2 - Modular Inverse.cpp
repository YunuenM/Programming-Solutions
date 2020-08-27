#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = (n/m)+1; i < m; i++){
        if((i*n) % m == 1){
            cout << i << endl;
            return 0;
        } 
    }
    cout << "No such integer exists." << endl;
}

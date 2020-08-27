#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, y1, x2, y2, charges;
    
    cin >> x1 >> y1 >> x2 >> y2 >> charges;
    if((charges - (abs(x1 - x2) + abs(y1 - y2))) % 2 == 0 && (abs(x1 - x2) + abs(y1 - y2)) <= charges){
        cout << "Y" << endl;
    }
    else{
        cout << "N" << endl;
    }
}

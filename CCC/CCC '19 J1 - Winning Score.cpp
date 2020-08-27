#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int A, B, temp;
    cin >> temp;
    A += (temp*3);
    cin >> temp;
    A += (temp*2);
    cin >> temp;
    A += temp;
    cin >> temp;
    B += (temp*3);
    cin >> temp;
    B += (temp*2);
    cin >> temp;
    B += temp;
    if(A > B){
        cout << "A" << endl;
    }
    else if(B > A){
        cout << "B" << endl;
    }
    else{
        cout << "T" << endl;
    }
}

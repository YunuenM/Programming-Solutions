#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        string t;
        cin >> t;
        char repeater = t[0];
        int counter = 1, length = t.length();
        for(int j = 1; j < length; j++){
            if(t[j] == repeater){
                counter++;
            }
            else{
                cout << counter << " " << repeater << " ";
                repeater = t[j];
                counter = 1;
            }
        }
        cout << counter << " " << repeater << endl;
    }
}

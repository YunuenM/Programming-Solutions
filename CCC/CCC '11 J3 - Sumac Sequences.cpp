#include <bits/stdc++.h>

using namespace std;

int main() {
    int tprevious, previous, counter = 2;
    
    cin >> tprevious >> previous;
    while(1){
        int current = tprevious - previous;
        if(previous < current){
            counter++;
            break;
        }
        counter++;
        tprevious = previous;
        previous = current;
    }
    cout << counter << endl;
}

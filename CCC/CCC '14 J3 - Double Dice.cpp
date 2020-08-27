#include <iostream>

using namespace std;

int main() {
    int n, Ant = 100, Dav = 100;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp1, temp2;
        cin >> temp1 >> temp2;
        
        if(temp1 > temp2){
            Dav -= temp1;
        }
        else if(temp2 > temp1){
            Ant -= temp2;
        }
    }
    cout << Ant << endl << Dav;
}

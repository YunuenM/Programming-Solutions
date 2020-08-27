#include <iostream>
#include <list>

using namespace std;

int main() {
    int N, both = 0;
    
    cin >> N;
    char parking[2][100];
    for(int j = 0; j < 2; j++){
        for(int i = 0; i < N; i++){
            cin >> parking[j][i];
        }
    }
    
    for(int i = 0; i < N; i++){
        if(parking[0][i] == parking[1][i] && parking[0][i] == 'C'){
            both++;
        }
    }
    cout << both;
}

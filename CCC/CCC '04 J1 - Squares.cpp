#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int squares, biggest = 1;
    
    cin >> squares;
    for(int i = 1; i < squares; i++){
        if((i*i) <= squares){
            biggest = i;
        }
    }
    
    cout << "The largest square has side length " << biggest << ".";
}

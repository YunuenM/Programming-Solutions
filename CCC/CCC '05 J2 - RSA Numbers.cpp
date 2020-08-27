#include <iostream>
#include <math.h>

using namespace std;

bool divisors(int num){
    if(num == 1){
        return false;
    }
    else if(num == 2){
        return false;
    }
    int counter = 2;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            counter++;
        }
    }
    if(counter == 4){
        return true;
    }
    return false;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int lower, higher, counter = 0;
    
    cin >> lower >> higher;
    for(int i = lower; i <= higher; i++){
        if(divisors(i)){
            counter++;
        }
    }
    cout << "The number of RSA numbers between " << lower << " and " << higher << " is " << counter << endl;
}

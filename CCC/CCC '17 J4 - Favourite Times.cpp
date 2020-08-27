#include <bits/stdc++.h>

using namespace std;

int main() {
    int D, min = 720, counter = 0;
    
    cin >> D;
    for(int i = 1; i <= (D % 720); i++){
        min++;
        int hour = min / 60, minutes = min % 60;
        if(hour > 12){
            hour -= 12;
        }
        if(hour <= 9){
            int one = minutes / 10, two = minutes % 10;
            if(hour - one == one - two){
                counter++;
            }
        }
        else{
            int one = minutes / 10, two = minutes % 10, oneH = hour / 10, twoH = hour % 10;
            if(oneH - twoH == twoH - one && twoH - one == one - two){
                counter++;
            }
        }
    }
    
    cout << (D / 720)*31 + counter << endl;
}

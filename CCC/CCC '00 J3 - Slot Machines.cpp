#include <bits/stdc++.h>

using namespace std;

int main() {
    int quarter, used1, used2, used3, counter = 0;
    
    cin >> quarter >> used1 >> used2 >> used3;
    while(1){
        used1++;
        quarter--;
        counter++;
        if(used1 % 35 == 0){
            quarter += 30;
        }
        if(quarter == 0){
            break;
        }
        
        used2++;
        quarter--;
        counter++;
        if(used2 % 100 == 0){
            quarter += 60;
        }
        if(quarter == 0){
            break;
        }
        
        used3++;
        quarter--;
        counter++;
        if(used3 % 10 == 0){
            quarter += 9;
        }
        if(quarter == 0){
            break;
        }
    }
    cout << "Martha plays " << counter << " times before going broke." << endl;
}

#include <bits/stdc++.h>

using namespace std;

void printdate(int date){
    if(date >= 10){
        cout << " " << date;
    }
    else{
        cout << "  " << date;
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int date, num;
    
    cin >> date >> num;
    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
    for(int i = 1; i < date; i++){
        cout << "    ";
    }
    
    for(int i = 1; i <= num; i++){
        printdate(i);
        if((i+date-1) % 7 != 0){
            if(i != num){
                cout << " ";
            }
        }
        else{
            cout << endl;
        }
    }
    
    if((num+date-1) % 7 != 0){
        cout << endl;
    }
}

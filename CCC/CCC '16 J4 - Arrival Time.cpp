#include <bits/stdc++.h>

using namespace std;

void printTime(int minutes){
    int hours = minutes / 60, min = minutes - (hours*60);
    
    if(min >= 60){
        hours++;
        minutes -= 60;
    }
    
    if(hours >= 24){
        hours -= 24;
    }
    
    if(hours < 10){
        if(min >= 10){
            cout << "0" << hours << ":" << min << endl;
        }
        else{
            cout << "0" << hours << ":0" << min << endl;
        }
    }
    else{
        if(min >= 10){
            cout << hours << ":" << min << endl;
        }
        else{
            cout << hours << ":0" << min << endl;
        }
    }
}

int main() {
    int h, m, t;
    char u;
    
    cin >> h >> u >> m;
    t = h*60 + m;
    for(int i = 240; i > 0; t++){
        if(t >= 420 && t < 600){
            i--;
        }
        else if(t >= 900 && t < 1140){
            i--;
        }
        else{
            i -= 2;
        }
    }
    printTime(t);
}

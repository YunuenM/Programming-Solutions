#include <bits/stdc++.h>

using namespace std;

int timeCheck(int current){
    int minutes = current / 100;
    
    minutes = current - (minutes * 100);
    minutes = abs(minutes);
    if(minutes >= 60){
        current += 100;
        current -= 60;
    }
    current = abs(current);
    
    if(current >= 2400){
        current -= 2400;
    }
    return abs(current);
}

int lessThan(int current, int move){
    if(move > current){
        int temp = move - current;
        current = 2400;
        current -= temp;
        return current;
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int ottawa;
    
    cin >> ottawa;
    cout << timeCheck(lessThan(ottawa, 0)) << " in Ottawa" << endl;
    cout << timeCheck(lessThan(ottawa, 300)) << " in Victoria" << endl;
    cout << timeCheck(lessThan(ottawa, 200)) << " in Edmonton" << endl;
    cout << timeCheck(lessThan(ottawa, 100)) << " in Winnipeg" << endl;
    cout << timeCheck(ottawa) << " in Toronto" << endl;
    cout << timeCheck(ottawa+100) << " in Halifax" << endl;
    cout << timeCheck(ottawa+130) << " in St. John's" << endl;
}

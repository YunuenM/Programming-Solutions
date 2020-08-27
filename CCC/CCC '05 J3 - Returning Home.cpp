#include <bits/stdc++.h>

using namespace std;

string print(char d){
    if(d == 'R'){
        return "LEFT";
    }
    else{
        return "RIGHT";
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> streets;
    vector<char> directions;
    
    while(1){
        string s;
        char d;
        cin >> d >> s;
        directions.push_back(d);
        if(s == "SCHOOL"){
            break;
        }
        streets.push_back(s);
    }
    
    for(int i = streets.size()-1; i >= 0; i--){
        cout << "Turn " << print(directions[i+1]) << " onto " << streets[i] << " street." << endl;
    }
    cout << "Turn " << print(directions[0]) << " into your HOME." << endl;
}

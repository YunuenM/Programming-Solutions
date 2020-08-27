#include <bits/stdc++.h>

using namespace std;
#define pii pair<int,int>

vector<pii> schedule;
vector<bool> done;

bool can(int num){
    bool h = !done[num], after, wrong;
    if(h){
        after = false;
        for(int i = 0; i < schedule.size(); i++){
            if(schedule[i].second == num) after = true;
        }
        if(after){
            wrong = false;
            for(int i = 0; i < schedule.size(); i++){
                if(schedule[i].second == num && !(done[schedule[i].first])) wrong = true;
            }
            h = !wrong;
        }
    }
    return h;
}

int main() {
    schedule.push_back(pii(0,6));
    schedule.push_back(pii(0,3));
    schedule.push_back(pii(1,0));
    schedule.push_back(pii(2,3));
    schedule.push_back(pii(2,4));
    while(1){
        int x, y;
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        schedule.push_back(pii(x-1,y-1));
    }
    for(int i = 0; i < 7; i++) done.push_back(false);
    
    bool impossible = false;
    int counter1 = 0;
    string answer = "";
    while(1){
        if(impossible || counter1 > 6) break;
        int counter2 = 0;
        bool no = false;
        while(1){
            if(counter2 > 6 || impossible || no) break;
            if(!(done[counter2]) && can(counter2)){
                done[counter2] = true;
                answer += to_string(counter2+1) + " ";
                no = true;
            }
            counter2++;
            if(counter2 > 6 && !no){
                answer = "Cannot complete these tasks.  Going to bed.";
                impossible = true;
            }
        }
        counter1++;
    }
    cout << answer << endl;
}

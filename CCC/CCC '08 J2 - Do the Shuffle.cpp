#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char order[5] = {'A', 'B', 'C', 'D', 'E'};
    
    while(1){
        int button, num;
        cin >> button >> num;
        if(button == 4 && num == 1){
            cout << order[0] << " " << order[1] << " " << order[2] << " " << order[3] << " " << order[4] << endl;
            break;
        }
        for(int i = 0; i < num; i++){
            if(button == 1){
                string temp = order;
                temp = temp.substr(1, 4) + order[0];
                strcpy(order, temp.c_str());
            }
            else if(button == 2){
                string temp = order;
                temp = order[4] + temp.substr(0, 4);
                strcpy(order, temp.c_str());
            }
            else if(button == 3){
                char temp = order[0];
                order[0] = order[1];
                order[1] = temp;
            }
            else{
                cout << order[0] << " " << order[1] << " " << order[2] << " " << order[3] << " " << order[4] << endl;
            }
        }
    }
}

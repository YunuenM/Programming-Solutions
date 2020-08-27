#include <iostream>

using namespace std;

bool increase(int depth[4]){
    for(int i = 0; i < 3; i++){
        if(depth[i+1] <= depth[i]){
            return false;
        }
    }
    return true;
}

bool decrease(int depth[4]){
    for(int i = 0; i < 3; i++){
        if(depth[i+1] >= depth[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int depth[4];
    
    for(int i = 0; i < 4; i++){
        cin >> depth[i];
    }
    
    if(increase(depth)){
        cout << "Fish Rising";
    }
    else if(decrease(depth)){
        cout << "Fish Diving";
    }
    else if(depth[0] == depth[1] && depth[1] == depth[2] && depth[2] == depth[3]){
        cout << "Fish At Constant Depth";
    }
    else{
        cout << "No Fish";
    }
}

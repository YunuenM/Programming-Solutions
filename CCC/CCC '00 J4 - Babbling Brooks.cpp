#include <bits/stdc++.h>

using namespace std;

vector<double> split(vector<double> stream, int location, int left){
    vector<double> splited;
    for(int i = 0; i < location-1; i++){
        splited.push_back(stream[i]);
    }
    double amount = (double)((stream[location-1]*left)/100);
    splited.push_back(amount);
    splited.push_back(stream[location-1]-amount);
    for(int i = location; i < stream.size(); i++){
        splited.push_back(stream[i]);
    }
    return splited;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<double> streams;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        streams.push_back(num);
    }
    while(1){
        int move;
        cin >> move;
        if(move == 77){
            break;
        }
        else if(move == 99){
            int location, left;
            cin >> location >> left;
            streams = split(streams, location, left);
        }
        else if(move == 88){
            int location;
            cin >> location;
            streams[location-1] += streams[location];
            streams.erase(streams.begin()+location);
        }
    }
    for(int i = 0; i < streams.size(); i++){
        if(i != streams.size()-1){
            cout << round(streams[i]) << " ";
        }
        else{
            cout << round(streams[i]) << endl;
        }
    }
}

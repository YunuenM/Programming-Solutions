#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int,int> messages,times;
  int M, time = -1;
  cin >> M;
  map<int,pair<int,int>> database;
  for(int i = 0; i < M; i++){
    char move;
    int id;
    cin >> move >> id;
    if(move == 'W'){
      time += id-1;
    }
    else{
      time++;
    }
    if(move != 'W'){
      map<int,pair<int,int>>::iterator it = database.find(id);
      if(move == 'R'){
        if(it != database.end()) it->second.first = time;
        else{
          pair<int,int> temp(time, 0);
          database.insert(pair<int,pair<int,int>>(id,temp));
        }
      }
      else{
        it->second.second += (time - it->second.first);
        it->second.first = -1;
      }
    }
  }
  for(map<int,pair<int,int>>::iterator it = database.begin(); it != database.end(); it++){
    if(it->second.first != -1){
      cout << it->first << " -1" << endl;
    }
    else{
      cout << it->first << " " << it->second.second << endl;
    }
  }
}

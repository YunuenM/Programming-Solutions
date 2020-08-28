#include <bits/stdc++.h>

using namespace std;

bool s(vector<string> e, vector<string> d){
  int numE = stoi(e[1]), numD = stoi(d[1]);
  return (numE < numD);
}

int main() {
  int N;

  cin >> N;
  for(int i = 0; i < N; i++){
    int num_stores, cost = 0;
    string needed[100][2];
    vector<vector<string>> item;
    cin >> num_stores;
    for(int j = 0; j < num_stores; j++){
      int items;
      cin >> items;
      for(int k = 0; k < items; k++){
        vector<string> name;
        string n, a, m;
        cin >> n >> a >> m;
        name.push_back(n);
        name.push_back(a);
        name.push_back(m);
        item.push_back(name);
      }
    }
    int items;
    cin >> items;
    for(int k = 0; k < items; k++){
      cin >> needed[k][0] >> needed[k][1];
      int remaining = stoi(needed[k][1]);
      vector<vector<string>> ap;
      for(int j = 0; j < item.size(); j++){
        //cout << item[j][0] << endl;
        if(item[j][0] == needed[k][0]){
          ap.push_back(item[j]);
        }
      }
      sort(ap.begin(), ap.end(), s);
      while(remaining != 0){
        if(ap.size() != 0){
          if(ap[0][2] != "0"){
            cost += stoi(ap[0][1]);
            remaining--;
            int nums = stoi(ap[0][2]) - 1;
            ap[0][2] = to_string(nums);
          }
          else{
           ap.erase(ap.begin());
          }
        }
        else{
          //cout << remaining << endl;
          break;
        }
      }
    }
    cout << cost << endl;
  }
}

#include <bits/stdc++.h>

using namespace std;

vector<string> notes = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};

bool checkRoot(vector<string> n){
  vector<string>::iterator it = find(notes.begin(), notes.end(), n[0]), it2 = find(notes.begin(), notes.end(), n[1]);
  if(abs(distance(notes.begin(), it2) - distance(notes.begin(), it)) != 4){
    if(abs(distance(notes.begin(), it) - distance(notes.begin(), it2)) != 8){
      return false;
    }
  }

  it = find(notes.begin(), notes.end(), n[1]), it2 = find(notes.begin(), notes.end(), n[2]);
  if(abs(distance(notes.begin(), it) - distance(notes.begin(), it2)) != 3){
    if(abs(distance(notes.begin(), it) - distance(notes.begin(), it2)) != 9){
      return false;
    }
  }

  it = find(notes.begin(), notes.end(), n[2]), it2 = find(notes.begin(), notes.end(), n[3]);
  if(abs(distance(notes.begin(), it) - distance(notes.begin(), it2)) != 3){
    if(abs(distance(notes.begin(), it) - distance(notes.begin(), it2)) != 9){
      return false;
    }
  }
  return true;
}

vector<string> shift(vector<string> n){
  string val = n[0];
  n.erase(n.begin());
  n.push_back(val);
  return n;
}

int main() {
  vector<string> nt = {"G", "B", "D", "F"};
  int N;

  cin >> N;
  for(int i = 0; i < N; i++){
    vector<string> temp;
    for(int j = 0; j < 4; j++){
      string t;
      cin >> t;
      temp.push_back(t);
    }

    if(checkRoot(temp)){
      cout << "root" << endl;
    }
    else{
      int count = 0;
      for(int j = 0; j < 3; j++){
        temp = shift(temp);
        if(checkRoot(temp)){
          count = j+1;
          break;
        }
      }
      count = 4 - count;
      if(count != 4 && count != 0){
        if(count == 1){
          cout << "first" << endl;
        }
        else if(count == 2){
          cout << "second" << endl;
        }
        else if(count == 3){
          cout << "third" << endl;
        }
      }
      else{
        cout << "invalid" << endl;
      }
    }
  }
}

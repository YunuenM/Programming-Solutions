#include <iostream>
#include <vector>

using namespace std;

typedef pair<int,int> pii;

int main() {
    vector<pii> visited;
    visited.push_back(pii(0,-1));
    visited.push_back(pii(0,-2));
    visited.push_back(pii(0,-3));
    visited.push_back(pii(1,-3));
    visited.push_back(pii(2,-3));
    visited.push_back(pii(3,-3));
    visited.push_back(pii(3,-4));
    visited.push_back(pii(3,-5));
    visited.push_back(pii(4,-5));
    visited.push_back(pii(5,-5));
    visited.push_back(pii(5,-4));
    visited.push_back(pii(5,-3));
    visited.push_back(pii(6,-3));
    visited.push_back(pii(7,-3));
    visited.push_back(pii(7,-4));
    visited.push_back(pii(7,-5));
    visited.push_back(pii(7,-6));
    visited.push_back(pii(7,-7));
    visited.push_back(pii(6,-7));
    visited.push_back(pii(5,-7));
    visited.push_back(pii(4,-7));
    visited.push_back(pii(3,-7));
    visited.push_back(pii(2,-7));
    visited.push_back(pii(1,-7));
    visited.push_back(pii(0,-7));
    visited.push_back(pii(-1,-7));
    visited.push_back(pii(-1,-6));
    visited.push_back(pii(-1,-5));
    pii current (-1,-5);
    while(1){
      char direction;
      int moves;
      bool work = true;
      pii notwork;
      cin >> direction >> moves;
      if(direction == 'q'){
        break;
      }
      for(int i = 0; i < moves; i++){
        if(direction=='u') current.second++;
        else if(direction == 'd') current.second--;
        else if(direction == 'l') current.first--;
        else if(direction == 'r') current.first++;
        if(find(visited.begin(), visited.end(), current) != visited.end()){
          work = false;
        }
        visited.push_back(current);
      }
      cout << current.first << " " << current.second << " ";
      if(work) cout << "safe" << endl;
      else{
        cout << "DANGER" << endl;
        break;
      }
    }
}

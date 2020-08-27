#include <iostream>

using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int lowest = 101, highest = 0, left = 101, right = 0, N;
  
  cin >> N;
  for(int i = 0; i < N; i++){
    int x, y;
    char useless;
    cin >> x >> useless >> y;
    if(x > right){
      right = x;
    }
    
    if(x < left){
      left = x;
    }

    if(y > highest){
      highest = y;
    }
    
    if(y < lowest){
      lowest = y;
    }
  }

  if(lowest == 0){
    lowest = 1;
  }
  if(left == 0){
    left = 1;
  }
  cout << left - 1 << ',' << lowest - 1 << endl;
  cout << right + 1 << ',' << highest + 1 << endl;
}

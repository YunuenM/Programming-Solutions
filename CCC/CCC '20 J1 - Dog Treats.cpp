#include <iostream>

using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int S, M, L;

  cin >> S >> M >> L;
  if(S + 2*M + 3*L >= 10)cout << "happy" << endl;
  else cout << "sad" << endl;
}

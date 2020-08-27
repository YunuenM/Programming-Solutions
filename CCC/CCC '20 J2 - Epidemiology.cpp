#include <iostream>

using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int P, N, R;
  cin >> P >> N >> R;
  int day = 0, people = N;
  while(N <= P){
    people = (people * R);
    N += people;
    day++;
    //cout << day << "    " << N << endl;
  }

  cout << day << endl;
}

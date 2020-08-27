#include <iostream>
#include <string>

using namespace std;

bool within(string a, string b){
  size_t found = a.find(b);
  if(found != string::npos){
    return true;
  }
  return false;
}

string shift(string a){
  int length = a.length();
  string back = a.substr(0, length-1);
  char first = a[length-1];
  string test = first + back;
  return test;
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string T, S;
  cin >> S >> T;
  int length = S.length(), counter = 0;
  if(within(S, T)){
    cout << "yes" << endl;
    return 0;
  }
  for(int i = 0; i < length-1; i++){
    T = shift(T);
    if(within(S, T)){
      cout << "yes" << endl;
      return 0;
    }
  }
  
  cout << "no" << endl;
  return 0;
}

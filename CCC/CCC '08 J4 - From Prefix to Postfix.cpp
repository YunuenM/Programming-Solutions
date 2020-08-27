#include <bits/stdc++.h>

using namespace std;

int main(){
  while(1){
    string equation;
    stack<string> parts;
    getline(cin, equation);
    if(equation == "0") break;
    
    for(int i = equation.length()-1; i >= 0; i--){
      if(equation[i] != ' '){
        if(isdigit(equation[i])){
          parts.push(equation.substr(i,1));
        }
        else{
          string temp1 = parts.top();
          parts.pop();
          string temp2 = parts.top();
          parts.pop();
          parts.push(temp1 + " " + temp2 + " " + equation[i]);
        }
      }
    }
    cout << parts.top() << endl;
  }
}

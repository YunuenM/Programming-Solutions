#include <iostream>
#include <list>

using namespace std;

int main() {
    int A = 0, B = 0, V;
    
    cin >> V;
    for(int i = 0; i < V; i++){
        char temp;
        cin >> temp;
        if(temp == 'A'){
            A++;
        }
        else{
            B++;
        }
    }
    
    if(A > B){
        cout << "A";
    }
    else if(B > A){
        cout << "B";
    }
    else{
        cout << "Tie";
    }
}

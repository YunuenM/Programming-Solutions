#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int T = 0, S = 0;
    int N;
    
    cin >> N;
    for(int i = 0; i < N+1; i++){
        string temp;
        getline(cin, temp);
        int length = temp.length();
        for(int j = 0; j < length; j++){
            if(temp[j] == 's' || temp[j] == 'S'){
                S++;
            }
            else if(temp[j] == 't' || temp[j] == 'T'){
                T++;
            }
        }
    }
    
    if(S > T){
        cout << "French";
    }
    else if(T > S){
        cout << "English";
    }
    else if(T == S && T == 0){
        cout << "English";
    }
    else{
        cout << "French";
    }
}

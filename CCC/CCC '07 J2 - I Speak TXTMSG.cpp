#include <bits/stdc++.h>

using namespace std;

void translate(string code){
    if(code == "CU"){
        cout << "see you" << endl;
    }
    else if(code == ":-)"){
        cout << "I'm happy" << endl;
    }
    else if(code == ":-("){
        cout << "I'm unhappy" << endl;
    }
    else if(code == ";-)"){
        cout << "wink" << endl;
    }
    else if(code == "(~.~)"){
        cout << "sleepy" << endl;
    }
    else if(code == "CCC"){
        cout << "Canadian Computing Competition" << endl;
    }
    else if(code == "CUZ"){
        cout << "because" << endl;
    }
    else if(code == "TA"){
        cout << "totally awesome" << endl;
    }
    else if(code == "TY"){
        cout << "thank you" << endl;
    }
    else if(code == "YW"){
        cout << "you're welcome" << endl;
    }
    else if(code == "TTYL"){
        cout << "talk to you later" << endl;
    }
    else{
        cout << code << endl;
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(1){
        string tran;
        cin >> tran;
        translate(tran);
        if(tran == "TTYL"){
            break;
        }
    }
}

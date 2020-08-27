#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int A = 0, B = 0;
    
    while(1){
        int command;
        cin >> command;
        if(command == 7){
            break;
        }
        else if(command == 2){
            char letter;
            cin >> letter;
            if(letter == 'A'){
                cout << A << endl;
            }
            else{
                cout << B << endl;
            }
        }
        else if(command == 1){
            char letter;
            int num;
            cin >> letter >> num;
            if(letter == 'A'){
                A = num;
            }
            else{
                B = num;
            }
        }
        else{
            char letterOne, letterTwo;
            cin >> letterOne >> letterTwo;
            if(command == 3){
                if(letterOne == 'A'){
                    if(letterTwo == 'A'){
                        A = A + A;
                    }
                    else{
                        A = A + B;
                    }
                }
                else{
                    if(letterTwo == 'A'){
                        B = A + B;
                    }
                    else{
                        B = B + B;
                    }
                }
            }
            else if(command == 4){
                if(letterOne == 'A'){
                    if(letterTwo == 'A'){
                        A = A * A;
                    }
                    else{
                        A = A * B;
                    }
                }
                else{
                    if(letterTwo == 'A'){
                        B = A * B;
                    }
                    else{
                        B = B * B;
                    }
                }
            }
            else if(command == 5){
                if(letterOne == 'A'){
                    if(letterTwo == 'A'){
                        A = A - A;
                    }
                    else{
                        A = A - B;
                    }
                }
                else{
                    if(letterTwo == 'A'){
                        B = B - A;
                    }
                    else{
                        B = B - B;
                    }
                }
            }
            else if(command == 6){
                if(letterOne == 'A'){
                    if(letterTwo == 'A'){
                        A = A / A;
                    }
                    else{
                        A = A / B;
                    }
                }
                else{
                    if(letterTwo == 'A'){
                        B = B / A;
                    }
                    else{
                        B = B / B;
                    }
                }
            }
        }
    }
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    int happy = 0, sad = 0;
    
    getline(cin, sentence);
    int length = sentence.length()-2;
    for(int i = 0; i < length; i++){
        if(sentence[i] == ':' && sentence[i+1] == '-'){
            if(sentence[i+2] == '('){
                sad++;
            }
            else if(sentence[i+2] == ')'){
                happy++;
            }
        }
    }
    
    if(happy > sad){
        cout << "happy";
    }
    else if(sad > happy){
        cout << "sad";
    }
    else if(sad == happy && sad != 0){
        cout << "unsure";
    }
    else{
        cout << "none";
    }
}

#include <bits/stdc++.h>

using namespace std;

vector<string> words = {"TO", "CCC", "GOOD", "LUCK", "TODAY"};
int width;
void print(int remain){
    bool skip = false, end = false;
    int counter = 0, used = 0, holder = remain;
    
    if(remain == 0){
        cout << endl;
        end = true;
        skip = true;
    }
    
    for(int i = 0; i < words.size(); i++){
        if(counter + words[i].length() + 1 > holder){
            break;
        }
        else{
            counter += (words[i].length() + 1);
            remain -= words[i].length();
            used++;
            //cout << used;
        }
    }
    
    if(used == 0 && end == false){
        for(int i = 0; i < remain; i++){
            cout << ".";
        }
        cout << endl;
        skip = true;
        //cout << "i am here 2" << endl;
    }
    else if(end == false){
        //cout << "i am here 3" << endl;
        if(remain % used == 0 && skip == false){
            //cout << "i am here 4" << endl;
            for(int i = 0; i < used; i++){
                for(int j = 0; j < remain/used; j++){
                    cout << ".";
                }
                cout << words[i];
            }
            cout << endl;
        }
        else if(skip == false){
            //cout << "i am here 5" << endl;
            holder = remain;
            remain -= (remain / used) * used;
            for(int i = 0; i < used; i++){
                for(int j = 0; j < holder/used; j++){
                    cout << ".";
                }
                if(remain > 0){
                    cout << ".";
                    remain--;
                }
                cout << words[i];
            }
            cout << endl;
        }
    }

    words.erase(words.begin(), words.begin()+used);
    if(!words.empty()){
        cout << words[0];
        int temp = words[0].length();
        words.erase(words.begin());
        //cout << "i am here 5" << endl;
        if(!words.empty()){
            print(width-temp);
        }
        else{
            for(int i = 0; i < width-temp; i++){
                cout << ".";
            }
            cout << endl;
        }
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> width;
    cout << "WELCOME";
    print(width-7);
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    while(1){
        vector<int> diffs;
        int n, one, pat = 1;
        cin >> n;
        if(n == 0) break;
        else if(n == 1){
            cin >> one;
            cout << 0 << endl;
        }
        else{
            cin >> one;
            for(int i = 1; i < n; i++){
                int temp;
                cin >> temp;
                diffs.push_back(one-temp);
                one = temp;
            }
            while(1){
                int counter = 0;
                while(1){
                    if(counter + pat >= n-1 || diffs[counter+pat] != diffs[counter]) break;
                    counter++;
                }
                if(counter + pat >= n-1) break;
                pat++;
            }
            cout << pat << endl;
        }
    }
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string lines[2];
    vector<vector<char>> sorted;
    getline(cin, lines[0]);
    getline(cin, lines[1]);
    for(int i = 0; i < 2; i++){
        vector<char> temp;
        for(int j = 0; j < lines[i].length(); j++){
            if(lines[i][j] != ' ') temp.push_back(lines[i][j]);
        }
        sort(temp.begin(), temp.end());
        sorted.push_back(temp);
    }
    if(sorted[0] == sorted[1]) cout << "Is an anagram." << endl;
    else cout << "Is not an anagram." << endl;
}

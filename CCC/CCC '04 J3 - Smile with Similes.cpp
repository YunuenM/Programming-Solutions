#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    int n, m;
    list<string> nouns, adjectives;
    list<string>::iterator it1, it2;
    
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        adjectives.push_back(temp);
    }
    for(int i = 0; i < m; i++){
        string temp;
        cin >> temp;
        nouns.push_back(temp);
    }
    
    for(it1 = adjectives.begin(); it1 != adjectives.end(); it1++){
        for(it2 = nouns.begin(); it2 != nouns.end(); it2++){
            cout << *it1 << " as " << *it2 << endl;
        }
    }
}

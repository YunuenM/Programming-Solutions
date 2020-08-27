#include <iostream>
#include <list>

using namespace std;

int main() {
    int one, two, three;
    list<int> middle;
    
    cin >> one >> two >> three;
    middle.push_back(one);
    middle.push_back(two);
    middle.push_back(three);
    middle.sort();
    
    list<int>::iterator it = middle.begin();
    it++;
    cout << *(it);
}

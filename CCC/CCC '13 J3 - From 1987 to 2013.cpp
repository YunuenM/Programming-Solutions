#include <iostream>
#include <set>

using namespace std;

int main() {
    int Y;
    
    cin >> Y;
    int year = Y+1;
    while(1){
        bool works = true;
        set<int> digits;
        pair<set<int>::iterator,bool> it;
        int temp = year;
        while(temp != 0){
            int number = temp % 10;
            temp = temp / 10;
            it = digits.insert(number);
            if(it.second == false){
                works = false;
                break;
            }
        }
        if(works){
            break;
        }
        year++;
    }
    cout << year << endl;
}

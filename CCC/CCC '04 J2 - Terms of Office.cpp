#include <iostream>

using namespace std;

int main() {
    int start, end;
    
    cin >> start >> end;
    int counter = start;
    while(1){
        cout << "All positions change in year " << counter << endl;
        counter += 60;
        if(counter > end){
            break;
        }
    }
}

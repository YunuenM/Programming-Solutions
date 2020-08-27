#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> nums;
    int sum = 0, K;
    
    cin >> K;
    for(int i = 0; i < K; i++){
        int temp;
        cin >> temp;
        if(temp != 0){
            nums.push_back(temp);
        }
        else{
            nums.pop_back();
        }
    }
    list<int>::iterator it;
    
    for(it = nums.begin(); it != nums.end(); it++){
        sum += *it;
    }
    cout << sum;
}

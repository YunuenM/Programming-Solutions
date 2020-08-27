#include <iostream>

using namespace std;

int main() {
    int last, second, third;
    
    cin >> third >> second >> last;
    int temp = 91 + third + last + (3*second);
    cout << "The 1-3-sum is " << temp;
}

#include <iostream>

using namespace std;

int main() {
    double height, weight, bdm;
    
    cin >> weight >> height;
    bdm = weight / (height * height);
    if(bdm > 25.0){
        cout << "Overweight";
    }
    else if(bdm < 18.0){
        cout << "Underweight";
    }
    else{
        cout << "Normal weight";
    }
}

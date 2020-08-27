#include <iostream>

using namespace std;

int main() {
    int ang1, ang2, ang3;
    
    cin >> ang1 >> ang2 >> ang3;
    if(ang1 + ang2 + ang3 == 180){
        if(ang1 == ang2 && ang2 == ang3){
            cout << "Equilateral";
        }
        else if(ang1 != ang2 && ang2 != ang3 && ang1 != ang3){
            cout << "Scalene";
        }
        else{
            cout << "Isosceles";
        }
    }
    else{
        cout << "Error";
    }
}

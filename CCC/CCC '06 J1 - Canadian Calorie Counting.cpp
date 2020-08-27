#include <iostream>

using namespace std;

int burger(int choice){
    if(choice == 1){
        return 461;
    }
    else if(choice == 2){
        return 431;
    }
    else if(choice == 3){
        return 420;
    }
    else{
        return 0;
    }
}

int side(int choice){
    if(choice == 1){
        return 100;
    }
    else if(choice == 2){
        return 57;
    }
    else if(choice == 3){
        return 70;
    }
    else{
        return 0;
    }
}

int drink(int choice){
    if(choice == 1){
        return 130;
    }
    else if(choice == 2){
        return 160;
    }
    else if(choice == 3){
        return 118;
    }
    else{
        return 0;
    }
}

int dessert(int choice){
    if(choice == 1){
        return 167;
    }
    else if(choice == 2){
        return 266;
    }
    else if(choice == 3){
        return 75;
    }
    else{
        return 0;
    }
}

int main() {
    int calories = 0, choices[4];
    
    for(int i = 0; i < 4; i++){
        cin >> choices[i];
    }
    calories += burger(choices[0]);
    calories += side(choices[1]);
    calories += drink(choices[2]);
    calories += dessert(choices[3]);
    cout << "Your total Calorie count is " << calories << ".";
}


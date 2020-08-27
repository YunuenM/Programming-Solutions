#include <iostream>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int Nforward, Nback, Bforward, Bback, total;
    int Ndistance = 0, Bdistance = 0;
    
    cin >> Nforward >> Nback >> Bforward >> Bback >> total;
    int counter = 0;
    while(1){
        if(counter + Nforward > total){
            int temp = total - counter;
            Ndistance += temp;
            break;
        }
        else{
            counter += Nforward;
            Ndistance += Nforward;
        }
        if(counter + Nback > total){
            int temp = total - counter;
            Ndistance -= temp;
            break;
        }
        else{
            counter += Nback;
            Ndistance -= Nback;
        }
    }
    
    counter = 0;
    while(1){
        if(counter + Bforward > total){
            int temp = total - counter;
            Bdistance += temp;
            break;
        }
        else{
            counter += Bforward;
            Bdistance += Bforward;
        }
        if(counter + Bback > total){
            int temp = total - counter;
            Bdistance -= temp;
            break;
        }
        else{
            counter += Bback;
            Bdistance -= Bback;
        }
    }
    
    if(Bdistance > Ndistance){
        cout << "Byron" << endl;
    }
    else if(Ndistance > Bdistance){
        cout << "Nikky" << endl;
    }
    else{
        cout << "Tied" << endl;
    }
}

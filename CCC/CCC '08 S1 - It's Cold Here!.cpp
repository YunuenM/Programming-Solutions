#include <string>

using namespace std;

int main() {
    int lowest = 201;
    string answer;
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int counter = 0;
    while(1){
        string city;
        int temp;
        cin >> city;
        if(city == "Waterloo"){
            cin >> temp;
            if(temp < lowest){
                lowest = temp;
                answer = city;
            }
            break;
        }
        else{
            cin >> temp;
            if(temp < lowest){
                lowest = temp;
                answer = city;
            }
        }
        counter++;
    }
    
    cout << answer << endl;
}

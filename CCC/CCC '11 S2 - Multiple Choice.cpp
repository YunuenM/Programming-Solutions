#include <iostream>
#include <list>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, correct = 0;
    char student[10000], answer[10000];
    
    cin >> N;
    for(int i = 0; i < N; i++){
        char temp;
        cin >> temp;
        student[i] = temp;
    }
    for(int i = 0; i < N; i++){
        char temp;
        cin >> temp;
        answer[i] = temp;
    }
    
    for(int i = 0; i < N; i++){
        if(answer[i] == student[i]){
            correct++;
        }
    }
    cout << correct << endl;
}

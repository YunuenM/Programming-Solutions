#include <bits/stdc++.h>

using namespace std;

int main() {
    string cards, suits[4] = {"Clubs", "Diamonds", "Hearts", "Spades"}, c = "23456789TJQKA";
    int counter = 0, points = 0, num = 0, bigger = 0;
    cin >> cards;
    cout << "Cards Dealt                Points" << endl;
    cout << "Clubs ";
    for(int i = 1; i < cards.length(); i++){
        if(c.find(cards[i]) != string::npos){
            num++;
            if(cards[i] == 'J') points++;
            else if(cards[i] == 'Q') points+=2;
            else if(cards[i] == 'K') points+=3;
            else if(cards[i] == 'A') points+=4;
            cout << cards[i] << " ";
        }
        else{
            if(num == 0) points+=3;
            else if(num == 1) points+=2;
            else if(num == 2) points++;
            cout << "           "  << points << endl;
            counter++;
            bigger += points;
            points = 0;
            num = 0;
            cout << suits[counter] << " ";
        }
    }
    if(num == 0) points+=3;
    else if(num == 1) points+=2;
    else if(num == 2) points++;
    cout << "           "  << points << endl;
    bigger += points;
    cout << "Total " << bigger << endl;
}

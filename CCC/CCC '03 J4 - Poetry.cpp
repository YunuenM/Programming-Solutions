#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string& s, char delimiter)
{
   vector<std::string> tokens;
   string token;
   istringstream tokenStream(s);
   while (getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

string lower(string word){
    string temp = "";
    for(int i = 0; i < word.length(); i++){
        char s = tolower(word[i]);
        temp += s;
    }
    return temp;
}

string vowels = "aeiou";
string syl(string word){
    word = lower(word);
    for(int i = word.length(); i > 0; i--){
        size_t found = vowels.find(word[i]);
        if(found != string::npos){
            return word.substr(i);
        }
    }
    return word;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    cin.ignore();
    for(int j = 0; j < N; j++){
        vector<string> last;
        for(int i = 0; i < 4; i++){
            string temp;
            getline(cin, temp);
            vector<string> t = split(temp, ' ');
            last.push_back(syl(t.back()));
        }
        if(last[0] == last[1] && last[1] == last[2] && last[2] == last[3]){
            cout << "perfect" << endl;
        }
        else if(last[0] == last[1] && last[2] == last[3] && last[1] != last[2]){
            cout << "even" << endl;
        }
        else if(last[0] == last[2] && last[1] == last[3] && last[1] != last[2]){
            cout << "cross" << endl;
        }
        else if(last[0] == last[3] && last[2] == last[1] && last[0] != last[2]){
            cout << "shell" << endl;
        }
        else{
            cout << "free" << endl;
        }
    }
}

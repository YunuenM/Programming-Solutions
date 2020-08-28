#include <bits/stdc++.h>

using namespace std;

struct multinode{
  string id;
  map<string,multinode*> leafs;
};

class multitree{
  public:
    multitree() {root = NULL;}
    ~multitree() {}
    long long int count();
    void insert(const vector<string> &ids);
    void print();
  private:
    multinode* root;
    void insert(vector<string> &ids, multinode* pos);
    long long int count(multinode* pos, bool add);
    void print(multinode* pos);
};

void multitree::insert(vector<string> &ids, multinode* pos){
  if(pos != NULL && !ids.empty()){
    map<string,multinode*>::iterator it = (pos->leafs).find(ids[0]);
    if(it == (pos->leafs).end()){
      multinode* temp = new multinode;
      temp->id = ids[0];
      (pos->leafs).insert(pair<string,multinode*>(ids[0],temp));
      ids.erase(ids.begin());
      if(ids.size() != 0){
        insert(ids, temp);
      }
    }
    else{
      ids.erase(ids.begin());
      if(ids.size() != 0){
        insert(ids, it->second);
      }
    }
  }
}

void multitree::insert(const vector<string> &ids){
  if(root == NULL){
    root = new multinode;
    root->id = "0";
  }
  vector<string> temp = ids;
  temp.erase(temp.begin());
  insert(temp, root);
}

long long int multitree::count(multinode* pos, bool add){
  long long int num = 0;
  if(add) num += stoi(pos->id);
  map<string,multinode*>::iterator it, it2;
  int biggest = 0;
  if(!(pos->leafs).empty()){
    for(it = (pos->leafs).begin(); it != (pos->leafs).end(); it++){
      int d = stoi(it->first);
      if(d > biggest){
        biggest = d;
        it2 = it;
      }
    }
    num += count(it2->second, true);
    for(it = (pos->leafs).begin(); it != (pos->leafs).end(); it++){
      if(it != it2){
        num += count(it->second, false);
      }
    }
  }
  return num;
}

long long int multitree::count(){
  if(root == NULL){
    root = new multinode;
    root->id = "0";
  }
  return count(root, true);
}

vector<string> split(const string& s, char delimiter)
{
   vector<string> tokens;
   string token;
   istringstream tokenStream(s);
   while (getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  for(int j = 0; j < 10; j++){
    multitree* yay = new multitree();
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string id;
        cin >> id;
        vector<string> temp = split(id, '.');
        yay->insert(temp);
    }
    cout << (yay->count()+1) % 1000000007 << endl;
  }
}

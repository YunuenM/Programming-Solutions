#include <bits/stdc++.h>

using namespace std;

#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

int main() {
  cout.tie(0);
	int N, M;
	cin >> N >> M;
    vector<vector<int>> grid(N);
    vector<vector<pair<int,int>>> factors(1000005);
    bool visited[1001][1001] = {false};

	int temp;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			scan(temp);
			grid[i].push_back(temp);
			factors[temp].push_back({i+1, j+1});
		}
	}

	queue<pair<int,int>> bfs;
	bfs.push({N, M});
	visited[N][M] = true;
	while(!bfs.empty()){
		pair<int,int> current = bfs.front();
		bfs.pop();
		int product = current.first * current.second;
		for(int i = 0; i < factors[product].size(); i++){
			if(factors[product][i].first == 1 && factors[product][i].second == 1){
			    cout << "yes" << endl;
			    return 0;
		    }
		    else if(!visited[factors[product][i].first][factors[product][i].second]){
		        visited[factors[product][i].first][factors[product][i].second] = true;
		        bfs.push({factors[product][i]});
		    }
		}
	}
	cout << "no" << endl;
}

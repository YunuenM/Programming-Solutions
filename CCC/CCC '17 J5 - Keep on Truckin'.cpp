#include <bits/stdc++.h>

using namespace std;

vector<long long int> hotels;
map<long long int,long long int> dp;
long long int A, B, N;

long long int solve(long long int current, long long int motel_position){
    long long int total = 0;
	if(current == 7000) return 1;
	else if(dp.find(current) != dp.end()) return dp[current];
	else{
		for(int i = motel_position; i < hotels.size(); i++){
			if(hotels[i]-current >= A && hotels[i]-current <= B) total += solve(hotels[i], i);
			else if(hotels[i]-current > B) break;
		}
	}
	dp[current] = total;
	return dp[current];
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
		hotels.push_back(990);
		hotels.push_back(1010);
		hotels.push_back(1970);
		hotels.push_back(2030);
		hotels.push_back(2940);
		hotels.push_back(3060);
		hotels.push_back(3930);
		hotels.push_back(4060);
		hotels.push_back(4970);
		hotels.push_back(5030);
		hotels.push_back(5990);
		hotels.push_back(6010);
		hotels.push_back(7000);
		cin >> A >> B >> N;
		for(int i = 0; i < N; i++){
			long long int temp;
			cin >> temp;
			hotels.push_back(temp);
		}
		sort(hotels.begin(), hotels.end());
		cout << solve(0, 0) << endl;
}

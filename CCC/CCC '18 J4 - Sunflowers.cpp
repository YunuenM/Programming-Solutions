#include <iostream>
#include <string>

using namespace std;
bool correcta(int table[100][100], int N);
bool print(int rotated[100][100], int N) {
	if (correcta(rotated, N)) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << rotated[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int N, table[100][100];
	cin >> N;

	for (int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++){
			cin >> table[i][j];
		}
	}
	
	if (correcta(table, N) == true) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << table[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		int rotated[100][100], rotated2[100][100];

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				rotated[j][N - i - 1] = table[i][j];
			}
		}
		if (print(rotated, N)){
			return 0;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				rotated2[j][N - i - 1] = rotated[i][j];
			}
		}
		if (print(rotated2, N)) {
			return 0;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				rotated[j][N - i - 1] = rotated2[i][j];
			}
		}
		if (print(rotated, N)) {
			return 0;
		}
	}
}
bool correcta(int table[100][100], int N){

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-1; j++) {
			if (table[i][j] > table[i][j + 1]) {
				return false;
			}
		}
	}
	
	for (int i = 0; i < N-1; i++) {
		if(table[i+1][0] < table[i][0]){
		    return false;
		}
	}
	return true;
}

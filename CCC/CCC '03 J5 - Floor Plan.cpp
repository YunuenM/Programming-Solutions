#include <bits/stdc++.h>

using namespace std;

int plan[25][25];

void rooms(int current_row, int current_column, int room_number, int rows, int columns){
	if(current_row >= 0 && current_row < rows && current_column >= 0 && current_column < columns && plan[current_row][current_column] == -1){
		plan[current_row][current_column] = room_number;
		rooms(current_row+1, current_column, room_number, rows, columns);
		rooms(current_row-1, current_column, room_number, rows, columns);
		rooms(current_row, current_column+1, room_number, rows, columns);
		rooms(current_row, current_column-1, room_number, rows, columns);
	}
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
		int flooring, rows, columns, room_number = 0;

		cin >> flooring >> rows >> columns;

		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				char temp;
				cin >> temp;
				if(temp == 'I') plan[i][j] = (-2);
				else plan[i][j] = (-1);
			}
		}

		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				if(plan[i][j] == -1){
					rooms(i, j, room_number, rows, columns);
					room_number++;
				}
			}
		}
		
		int room_sizes[room_number];
		for(int i = 0; i < room_number; i++) room_sizes[i] = 0;
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				if(plan[i][j] != -2) room_sizes[plan[i][j]]++;
			}
		}
		sort(room_sizes, room_sizes + room_number, greater<>());

		for(int i = 0; i < room_number; i++){
			if(room_sizes[i] <= flooring) flooring -= room_sizes[i];
			else{
				if(i == 1) cout << "1 room, ";
				else cout << i << " rooms, "; 
				cout << flooring << " square metre(s) left over" << endl;
				return 0;
			}
		}
		
		if(room_number == 1) cout << "1 room, ";
		else cout << room_number << " rooms, "; 
		cout << flooring << " square metre(s) left over" << endl;
}

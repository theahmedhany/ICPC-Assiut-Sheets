#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int row, column, process;
	cin >> row >> column >> process;

	int arry[row + 1][column + 1];

	for(int i = 1; i <= row; i++){
		for(int j = 1; j <= column; j++){
			cin >> arry[i][j];
		}
	}

	int row_arry[row + 1];
	int column_arry[column + 1];

	for(int i = 1; i <= row; i++){
		row_arry[i] = i;
	}

	for(int i = 1; i <= column; i++){
		column_arry[i] = i;
	}

	while(process--){
		char process_char;
		int number_1, number_2;
		cin >> process_char >> number_1 >> number_2;

		if (process_char == 'g') {
			int final_row = row_arry[number_1];
			int final_column = column_arry[number_2];
			cout << arry[final_row][final_column] << endl;
		} else if (process_char == 'r') {
			swap(row_arry[number_1], row_arry[number_2]);
		} else if (process_char == 'c') {
			swap(column_arry[number_1], column_arry[number_2]);
		}
	}

}

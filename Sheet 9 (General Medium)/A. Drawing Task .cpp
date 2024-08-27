#include<bits/stdc++.h>

using namespace std;

int main(){

	int row , column , process;
	cin >> row >> column >> process;

	char arr[row][column];

	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			arr[i][j] = '.';
		}
	}

	while(process--){

		int row_1 , column_1 , row_2 , column_2;
		char choose_char;

		cin >> row_1 >> column_1 >> row_2 >> column_2 >> choose_char;
		
		for(int i = min(row_1 , row_2) - 1; i <= max(row_1 , row_2) - 1; i++){
			for(int j = min(column_1 , column_2) - 1; j <= max(column_1 , column_2) - 1; j++){
				arr[i][j] = choose_char;
			}
		}

	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			cout << arr[i][j];
		}

		cout << endl;
	}

}
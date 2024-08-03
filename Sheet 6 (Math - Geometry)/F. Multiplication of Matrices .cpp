#include<bits/stdc++.h>

using namespace std;

int main() {

	int size_1, size_2;
	cin >> size_1 >> size_2;

	int matrix_1[size_1][size_2];

	for (int i = 0; i < size_1; i++){

		for (int j = 0; j < size_2; j++){
			cin >> matrix_1[i][j];
		}
		
	}

	int size_3, size_4;
	cin >> size_3 >> size_4;

	int matrix_2[size_3][size_4];

	for (int i = 0; i < size_3; i++){

		for (int j = 0; j < size_4; j++){
			cin >> matrix_2[i][j];
		}
		
	}

	int final_matrix[size_1][size_4];

	for (int i = 0; i < size_1; i++){

		for (int j = 0; j < size_4; j++){
			final_matrix[i][j] = 0;
		}
		
	}

	for (int x = 0; x < size_1; x++){

		for (int y = 0; y < size_4; y++){

			for (int z = 0; z < size_2; z++){
				final_matrix[x][y] += matrix_1[x][z] * matrix_2[z][y];
			}
			
		}
		
	}
	
	for (int i = 0; i < size_1; i++){
		
		for (int j = 0; j < size_4; j++){
			cout << final_matrix[i][j] << " ";
		}
		
		cout << endl;
	}

}
#include<bits/stdc++.h>

using namespace std;

int row, column;
int Matrix_1[100][100];
int Matrix_2[100][100];
int answer[100][100];

void matrixSum(int row_1, int column_1) {

  if (row_1 == row || column_1 == column) {
    return;
  }


  if (column_1 < column - 1) {
    matrixSum(row_1, column_1 + 1);
  } else {
    matrixSum(row_1 + 1, 0);
  }

  answer[row_1][column_1] = Matrix_1[row_1][column_1] + Matrix_2[row_1][column_1];

}

int main() {

  cin >> row >> column;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> Matrix_1[i][j];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> Matrix_2[i][j];
    }
  }

  matrixSum(0, 0);

  for (int x = 0; x < row; x++) {
    for (int y = 0; y < column; y++) {
      cout << answer[x][y] << " ";
    }
    cout << endl;
  }

}

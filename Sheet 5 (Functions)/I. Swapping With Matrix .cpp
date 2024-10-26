#include <bits/stdc++.h>

using namespace std;

int number;
int matrix[500][500];

void swapMatrix(int row, int column) {

  for (int i = 0; i < number; i++) {
    swap(matrix[row][i], matrix[column][i]);
  }

  for (int i = 0; i < number; i++) {
    swap(matrix[i][row], matrix[i][column]);
  }

}

int main() {

  int row, column;
  cin >> number >> row >> column;

  for (int i = 0; i < number; i++) {
    for (int j = 0; j < number; j++) {
      cin >> matrix[i][j];
    }
  }

  row--, column--;

  swapMatrix(row, column);

  for (int i = 0; i < number; i++) {
    for (int j = 0; j < number; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

}

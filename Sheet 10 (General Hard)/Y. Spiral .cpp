#include <bits/stdc++.h>

using namespace std;

int main() {

  cin.tie(0);
  cout.sync_with_stdio(0);

  long long row, column;
  cin >> row >> column;

  long long arry[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> arry[i][j];
    }
  }

  int final_row = 0, final_column = 0;

  while (final_row < row && final_column < column) {
    for (int i = final_column; i < column; i++) {
      cout << arry[final_row][i] << " ";
    }
    final_row++;

    for (int i = final_row; i < row; i++) {
      cout << arry[i][column - 1] << " ";
    }
    column--;

    if (final_row < row) {
      for (int i = column - 1; i >= final_column; i--) {
        cout << arry[row - 1][i] << " ";
      }
      row--;
    }

    if (final_column < column) {
      for (int i = row - 1; i >= final_row; i--) {
        cout << arry[i][final_column] << " ";
      }
      final_column++;
    }
  }

}
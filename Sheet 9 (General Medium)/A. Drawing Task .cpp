#include<bits/stdc++.h>

using namespace std;

int main() {

  int row, column, processes;
  cin >> row >> column >> processes;

  char grid[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      grid[i][j] = '.';
    }
  }

  while (processes--) {
    int row_1, column_1, row_2, column_2;
    char fill_char;

    cin >> row_1 >> column_1 >> row_2 >> column_2 >> fill_char;

    for (int i = min(row_1, row_2) - 1; i <= max(row_1, row_2) - 1; i++) {
      for (int j = min(column_1, column_2) - 1; j <= max(column_1, column_2) - 1; j++) {
        grid[i][j] = fill_char;
      }
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << grid[i][j];
    }
    cout << endl;
  }

}

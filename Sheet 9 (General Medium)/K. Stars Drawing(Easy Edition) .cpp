#include<bits/stdc++.h>

using namespace std;

const int general_size = 1e3;
char arry[general_size][general_size];
int visited[general_size][general_size];

vector <pair<pair<int, int>, int>> result;
int number_1, number_2;

void add(int row, int column, int moves){

  int column_move = column + moves;
  int column_copy = column;

  while (column_copy <= column_move && column_copy <= number_2) {
    visited[row][column_copy] = 1;
    column_copy++;
  }

  column_move = column - moves;
  column_copy = column;

  while (column_copy >= column_move && column_copy >= 1) {
    visited[row][column_copy] = 1;
    column_copy--;
  }

  int row_move = row + moves;
  int row_copy = row;

  while (row_copy <= row_move && row_copy <= number_1) {
    visited[row_copy][column] = 1;
    row_copy++;
  }

  row_move = row - moves;
  row_copy = row;

  while (row_copy >= row_move && row_copy >= 1) {
    visited[row_copy][column] = 1;
    row_copy--;
  }

}

int checkStarts(int row, int column){

  int right = 0, left = 0, upper = 0, lower = 0;
  int column_copy = column;

  while (column_copy <= number_2 && arry[row][column_copy] == '*') {
    right++;
    column_copy++;
  }

  column_copy = column;

  while (column_copy >= 1 && arry[row][column_copy] == '*') {
    left++;
    column_copy--;
  }

  int row_copy = row;

  while (row_copy >= 1 && arry[row_copy][column] == '*') {
    upper++;
    row_copy--;
  }

  row_copy = row;

  while (row_copy <= number_1 && arry[row_copy][column] == '*') {
    lower++;
    row_copy++;
  }

  return min(min(left - 1, right - 1), min(upper - 1, lower - 1));

}

int main(){

  cin >> number_1 >> number_2;

  for (int i = 1; i <= number_1; i++) {
    for (int j = 1; j <= number_2; j++) {
      cin >> arry[i][j];
    }
  }

  for (int i = 1; i <= number_1; i++) {
    for (int j = 1; j <= number_2; j++) {
      if (arry[i][j] == '*') {
        int stars = checkStarts(i, j);
        if (stars > 0) {
          result.push_back({{i, j}, stars});
          add(i, j, stars);
        }
      }
    }
  }

  for (int i = 1; i <= number_1; i++) {
    for (int j = 1; j <= number_2; j++) {
      if (arry[i][j] == '*') {
        if (visited[i][j] != 1) {
          cout << -1;
          return 0;
        }
      }
    }
  }

  cout << result.size() << endl;

  for (int i = 0; i < result.size(); i++) {
    cout << result[i].first.first << " " << result[i].first.second << " " << result[i].second << endl;
  }

}

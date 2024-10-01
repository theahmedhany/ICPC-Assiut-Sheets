#include <bits/stdc++.h>

using namespace std;

int main() {

  int row, column;
  cin >> row >> column;

  int arry_1[row] = {0};
  int arry_2[column] = {0};

  for (int i = 0; i < row; i++) {
    string line;
    cin >> line;

    for (int j = 0; j < column; j++) {
      if (line[j] == 'S') {
        arry_1[i] = 1;
        arry_2[j] = 1;
      }
    }
  }

  int cake = 0;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (arry_1[i] == 0 || arry_2[j] == 0) {
        cake++;
      }
    }
  }

  cout << cake << endl;

}

#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int matrix[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cin >> matrix[i][j];
    }
  }

  int main_sum = 0, secondary_sum = 0;

  for (int i = 0; i < size; i++) {
    main_sum += matrix[i][i];
    secondary_sum += matrix[i][size - 1 - i];
  }

  cout << abs(main_sum - secondary_sum) << endl;

}

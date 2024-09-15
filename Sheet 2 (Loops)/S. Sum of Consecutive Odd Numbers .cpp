#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  while (counter--) {
    int number_1, number_2;
    cin >> number_1 >> number_2;

    int min_value = min(number_1, number_2);
    int max_value = max(number_1, number_2);

    int sum = 0;
    for (int j = min_value + 1; j < max_value; j++) {
      if (j % 2 != 0) {
        sum += j;
      }
    }

    cout << sum << endl;
  }

}

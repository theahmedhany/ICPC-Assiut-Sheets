#include<bits/stdc++.h>

using namespace std;

int result[1000005];

int main() {

  long long counter;
  cin >> counter;

  while (counter--) {
    long long number_1, number_2;
    cin >> number_1 >> number_2;

    if (number_1 * (number_1 + 1) / 2 < number_2) {
      cout << -1 << endl;
      continue;
    }

    long long sum = 0;
    long long count = 0;

    for (long long i = number_1; i >= 1; i--) {
      if (sum + i <= number_2) {
        sum += i;
        result[count] = i;
        count++;
      }

      if (sum == number_2) {
        break;
      }
    }

    for (long long j = 0; j < count; j++) {
      cout << result[j] << " ";
    }
    cout << endl;
  }

}

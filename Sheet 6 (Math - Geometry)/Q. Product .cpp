#include <bits/stdc++.h>

using namespace std;

int main() {

  long long number_1, number_2, number_3;
  cin >> number_1 >> number_2 >> number_3;

  long long max_number = max(number_1, number_2);
  long long min_number = min(number_1, number_2);
  long long result = 1;

  for (long long i = min_number; i <= max_number; i++) {
    result *= i;
    result %= number_3;
  }

  cout << result << endl;

}

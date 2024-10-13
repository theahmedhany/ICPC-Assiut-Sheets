#include<bits/stdc++.h>

using namespace std;

long long Combination(long long number_1, long long number_2) {

  long long result = 1;
  long long temp = 2;

  for (int i = number_2 + 1; i <= number_1; i++) {
    result *= i;
    if (temp <= number_1 - number_2 && result % temp == 0) {
      result /= temp;
      temp++;
    }
  }

  return result;

}

int main() {

  long long number_1, number_2;
  cin >> number_1 >> number_2;

  if (number_2 > number_1) {
    cout << 0 << endl;
  } else {
    cout << Combination(number_1, number_2) << endl;
  }

}

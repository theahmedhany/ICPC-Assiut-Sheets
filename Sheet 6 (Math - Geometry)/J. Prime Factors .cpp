#include<bits/stdc++.h>

using namespace std;

int main() {

  long long number;
  cin >> number;

  int flag = 0;

  for (int i = 2; i <= number / 2; i++) {
    int counter = 0;

    while (number % i == 0) {
      counter++;
      number /= i;
    }

    if (counter > 0 && flag > 0) {
      cout << "*";
    }

    if (counter > 0) {
      cout << "(" << i << "^" << counter << ")";
      flag = 1;
    }

    if (number == 1) {
      break;
    }
  }

  if (number > 1 && flag) {
    cout << "*";
  }

  if (number > 1) {
    cout << "(" << number << "^" << 1 << ")";
  }

}
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int number) {

  if (number <= 1) return false;
  if (number == 2) return true;
  if (number % 2 == 0) return false;

  for (int i = 3; i * i <= number; i += 2) {
    if (number % i == 0) return false;
  }

  return true;

}

int main() {

  int size;
  cin >> size;

  while (size--) {
    int number;
    cin >> number;

    if (isPrime(number)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

}

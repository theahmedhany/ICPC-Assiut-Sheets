#include <bits/stdc++.h>

using namespace std;

int main() {

  string number;
  cin >> number;

  if (number.length() < 2) {
    cout << "NO" << endl;
    return 0;
  }

  int first_digit = number[0] - '0';
  int second_digit = number[1] - '0';

  if (second_digit == 0) {
    cout << "YES" << endl;
  } else if (first_digit % second_digit == 0 || second_digit % first_digit == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string text) {

  string reversed = text;
  reverse(reversed.begin(), reversed.end());
  return text == reversed;

}

string getBinary(int number) {

  string binary = "";

  while (number > 0) {
    if (number % 2) {
      binary.push_back('1');
    } else {
      binary.push_back('0');
    }
    number /= 2;
  }

  return binary;

}

int main() {

  int number;
  cin >> number;

  if (number % 2) {
    string binary = getBinary(number);

    if (isPalindrome(binary)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    cout << "NO" << endl;
  }

}

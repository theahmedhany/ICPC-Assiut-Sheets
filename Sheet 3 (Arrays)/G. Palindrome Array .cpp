#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry[size];
  bool is_palindrome = true;

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  for (int i = 0; i < size / 2; i++) {
    if (arry[i] != arry[size - 1 - i]) {
      is_palindrome = false;
      break;
    }
  }

  if (is_palindrome) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}

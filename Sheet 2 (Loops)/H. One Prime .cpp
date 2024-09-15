#include<bits/stdc++.h>

using namespace std;

int main() {

  int number;
  cin >> number;

  int divisible = number / 2;
  int flag = 0;

  for (int i = 2; i <= divisible; i++) {
    if (number % i == 0) {
      cout << "NO" << endl;
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    cout << "YES" << endl;
  }

}

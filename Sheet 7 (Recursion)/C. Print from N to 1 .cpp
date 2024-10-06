#include<bits/stdc++.h>

using namespace std;

void print(int number, bool flag = false) {

  if (number == 0) {
    return;
  }

  if (flag) {
    cout << " ";
  }

  cout << number;

  print(number - 1, true);

}

int main() {

  int number;
  cin >> number;

  print(number);

}

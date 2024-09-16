#include<bits/stdc++.h>

using namespace std;

int main() {

  long long number;
  cin >> number;

  if (number == 0) {
    cout << 1 << endl;
    return 0;
  }

  if (number % 4 == 0) {
    cout << 6 << endl;
  } else if (number % 4 == 1) {
    cout << 8 << endl;
  } else if (number % 4 == 2) {
    cout << 4 << endl;
  } else if (number % 4 == 3) {
    cout << 2 << endl;
  }

}

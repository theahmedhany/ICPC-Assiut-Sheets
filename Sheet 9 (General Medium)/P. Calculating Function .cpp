#include<bits/stdc++.h>

using namespace std;

int main() {

  long long number;
  cin >> number;

  if (number % 2 == 0) {
    cout << number / 2 << endl;
  } else {
    cout << - (number + 1) / 2 << endl;
  }

}

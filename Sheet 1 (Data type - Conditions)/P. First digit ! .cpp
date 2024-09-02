#include<bits/stdc++.h>

using namespace std;

int main() {

  int number;
  cin >> number;

  int result = number / 1000;

  if (result % 2 == 0) {
    cout << "EVEN" << endl;
  } else {
    cout << "ODD" << endl;
  }

}

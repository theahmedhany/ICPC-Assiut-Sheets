#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  for (int i = 1; i <= counter / 2; i++) {
    if (counter % i == 0) {
      cout << i << endl;
    }
  }

  cout << counter << endl;

}

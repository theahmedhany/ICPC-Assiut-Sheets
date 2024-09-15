#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  for (int i = 1; i <= counter; i++) {
    if (i % 2 == 0) {
      cout << i << endl;
    } else if (counter <= 1) {
      cout << -1 << endl;
    }
  }

}

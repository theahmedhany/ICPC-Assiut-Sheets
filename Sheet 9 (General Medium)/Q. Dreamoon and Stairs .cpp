#include<bits/stdc++.h>

using namespace std;

int main() {

  int steps, number;
  cin >> steps >> number;

  int min_steps;

  if (steps % 2 == 0) {
    min_steps = steps / 2;
  } else {
    min_steps = (steps / 2) + 1;
  }

  for (int i = min_steps; i <= steps; i++) {
    if (i % number == 0) {
      cout << i;
      return 0;
    }
  }

  cout << -1;

}

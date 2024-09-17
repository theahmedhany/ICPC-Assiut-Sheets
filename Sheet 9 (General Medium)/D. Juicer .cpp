#include <bits/stdc++.h>

using namespace std;

int main() {

  int size, maximum, waste;
  int sum = 0, counter = 0;

  cin >> size >> maximum >> waste;

  for (int i = 0; i < size; i++) {
    int value;
    cin >> value;

    if (value <= maximum) {
      sum += value;

      if (sum > waste) {
        counter++;
        sum = 0;
      }
    }
  }

  cout << counter << endl;

}

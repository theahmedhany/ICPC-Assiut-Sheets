#include<bits/stdc++.h>

using namespace std;

int main() {

  int size, number;
  cin >> size >> number;

  int points = (size * 2) + 1;
  int arry[points];

  for (int i = 0; i < points; i++) {
    cin >> arry[i];
  }

  for (int i = 1; i < points - 1; i++) {
    if (arry[i] > arry[i - 1] + 1 && arry[i] > arry[i + 1] + 1) {
      arry[i]--;
      number--;

      if (number == 0) {
        break;
      }
    }
  }

  for (int i = 0; i < points; i++) {
    cout << arry[i] << " ";
  }

}

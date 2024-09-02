#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int max = size;
  int frequency[size + 1] = {0};

  for (int i = 0; i < size; i++) {
    int number;
    cin >> number;

    frequency[number] = 1;

    while (frequency[max]) {
      cout << max << " ";
      max--;
    }

    cout << endl;
  }

}

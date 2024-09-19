#include<bits/stdc++.h>

using namespace std;

int main() {

  const int max = 100;
  int birds[max];

  int size;
  cin >> size;

  for (int i = 0; i < size; i++) {
    cin >> birds[i];
  }

  int cases;
  cin >> cases;

  for (int i = 0; i < cases; i++) {
    int wire, position;
    cin >> wire >> position;

    --wire;

    if (wire != 0) {
      birds[wire - 1] += position - 1;
    }

    if (wire != size - 1) {
      birds[wire + 1] += birds[wire] - position;
    }

    birds[wire] = 0;
  }

  for (int i = 0; i < size; i++) {
    cout << birds[i] << endl;
  }

}

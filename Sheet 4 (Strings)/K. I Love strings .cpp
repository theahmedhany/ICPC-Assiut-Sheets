#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  while (size--) {
    string first, second;
    cin >> first >> second;

    int min_size = min(first.size(), second.size());

    for (int i = 0; i < min_size; i++) {
      cout << first[i] << second[i];
    }

    if (min_size == second.size()) {
      for (int i = min_size; i < first.size(); i++) {
        cout << first[i];
      }
    } else {
      for (int i = min_size; i < second.size(); i++) {
        cout << second[i];
      }
    }

    cout << endl;
  }

}

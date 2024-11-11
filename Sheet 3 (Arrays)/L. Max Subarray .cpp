#include<bits/stdc++.h>

using namespace std;

int main() {

  int test_cases;
  cin >> test_cases;

  while (test_cases--) {
    int size;
    cin >> size;

    int arry[size];

    for (int i = 0; i < size; i++) {
      cin >> arry[i];
    }

    for (int i = 0; i < size; i++) {
      int maximum = arry[i];
      cout << maximum << " ";

      for (int j = i + 1; j < size; j++) {
        maximum = max(maximum, arry[j]);
        cout << maximum << " ";
      }
    }

    cout << endl;
  }

}

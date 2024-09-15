#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  for (int i = 1; i <= counter; i++) {
    string number;
    cin >> number;

    int size = number.size();

    for (int j = size - 1; j >= 0; j--) {
      cout << number[j] << " ";
    }

    cout << endl;
  }

}

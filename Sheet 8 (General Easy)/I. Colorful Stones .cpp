#include <bits/stdc++.h>

using namespace std;

int main() {

  string value_1, value_2;
  cin >> value_1 >> value_2;

  int counter = 0;

  for (int i = 0; i < value_2.size(); i++) {
    if (value_1[counter] == value_2[i]) {
      counter++;
    }
  }

  cout << ++counter << endl;

}

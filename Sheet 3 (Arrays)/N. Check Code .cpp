#include<bits/stdc++.h>

using namespace std;

int main() {

  int number_1, number_2;
  cin >> number_1 >> number_2;

  string code;
  cin >> code;

  if (code.size() != number_1 + number_2 + 1) {
    cout << "No" << endl;
    return 0;
  }

  if (code[number_1] != '-') {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < code.size(); i++) {
    if (i != number_1 && (code[i] < '0' || code[i] > '9')) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

}

#include <bits/stdc++.h>

using namespace std;

int main() {

  string value;
  cin >> value;

  int length = value.length();

  int flag = 0;

  for (int i = 0; i < length; i++) {
    if (value[i] != value[length - i - 1] && value[i] != '?' && value[length - i - 1] != '?') {
      flag = 1;
      break;
    } else if (value[i] == '?' && value[length - i - 1] != '?') {
      value[i] = value[length - i - 1];
    } else if (value[length - i - 1] == '?' && value[i] != '?') {
      value[length - i - 1] = value[i];
    } else if (value[length - i - 1] == '?' && value[i] == '?') {
      value [length - i - 1] == 'a';
      value [i] == 'a';
    }
  }

  if (flag == 1) {
    cout << -1;
  } else {
    for (int i = 0; i < length; i++) {
      if (value[i] == '?') {
        value[i] = 'a';
        value[length - i - 1] = 'a';
      }
    }

    cout << value;
  }

}
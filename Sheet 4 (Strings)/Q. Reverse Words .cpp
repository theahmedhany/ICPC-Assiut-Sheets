#include <bits/stdc++.h>

using namespace std;

int main() {

  string txt;

  string arry[100006];
  int index = 0;

  while (cin >> txt) {
    reverse(txt.begin(), txt.end());
    arry[index] = txt;
    index++;
  }

  for (int i = 0; i < index; i++) {
    cout << arry[i];
    if (i != index - 1) {
      cout << " ";
    }
  }

  cout << endl;

}

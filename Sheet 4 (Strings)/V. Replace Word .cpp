#include <bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  cin >> txt;

  int size = txt.size();
  string egypt = "EGYPT";

  for (int i = 0; i < size; i++) {
    int index = 0;
    int counter = i;

    for (index = 0; index < 5 && counter < size; index++, counter++) {
      if (txt[counter] != egypt[index]) {
        break;
      }
    }

    if (index == 5) {
      cout << " ";
      i += 4;
    } else {
      cout << txt[i];
    }
  }

  cout << endl;

}

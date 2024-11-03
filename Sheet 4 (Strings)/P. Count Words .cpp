#include <bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  getline(cin, txt);

  int counter = 0;
  bool in_word = false;

  for (int i = 0; i < txt.size(); i++) {
    if (isalpha(txt[i])) {
      if (!in_word) {
        counter++;
        in_word = true;
      }
    } else {
      in_word = false;
    }
  }

  cout << counter << endl;

}

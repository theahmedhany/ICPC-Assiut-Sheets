#include<bits/stdc++.h>

using namespace std;

int main() {

  string main_txt = "qwertyuiopasdfghjkl;zxcvbnm,./";

  string txt;
  char direction;
  cin >> direction >> txt;

  string final_txt;

  for (int i = 0; i < txt.size(); i++) {
    int index = main_txt.find(txt[i]);

    if (direction == 'R') {
      final_txt += main_txt[index - 1];
    } else {
      final_txt += main_txt[index + 1];
    }
  }

  cout << final_txt << endl;

}

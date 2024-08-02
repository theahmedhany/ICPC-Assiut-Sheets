#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  string txt;
  cin >> txt;

  int score = 0;

  for (int i = 0; i < txt.size(); i++) {
    if (txt[i] == 'V') {
      score += 5;
    } else if (txt[i] == 'W') {
      score += 2;
    } else if (txt[i] == 'X') {
      i++;
    } else if (txt[i] == 'Y' && i + 1 < txt.size()) {
      txt.push_back(txt[i + 1]);
      i++;
    } else if (txt[i] == 'Z' && i + 1 < txt.size()) {
      if (txt[i + 1] == 'V') {
        score /= 5;
        i++;
      } else if (txt[i + 1] == 'W') {
        score /= 2;
        i++;
      }
    }
  }

  cout << score << endl;

}
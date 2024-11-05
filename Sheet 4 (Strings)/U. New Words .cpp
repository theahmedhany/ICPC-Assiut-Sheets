#include <bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  cin >> txt;

  int e = 0, g = 0, y = 0, p = 0, t = 0;

  for (int i = 0; i < txt.size(); i++) {
    txt[i] = tolower(txt[i]);

    e += (txt[i] == 'e');
    g += (txt[i] == 'g');
    y += (txt[i] == 'y');
    p += (txt[i] == 'p');
    t += (txt[i] == 't');
  }

  int result = min({e, g, y, p, t});
  cout << result << endl;

}

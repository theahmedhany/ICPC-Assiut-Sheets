#include<bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  cin >> txt;

  int size = txt.size();

  for (int i = 0; i < size / 2; i++) {
    if (txt[i] != txt[size - 1 - i]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

}

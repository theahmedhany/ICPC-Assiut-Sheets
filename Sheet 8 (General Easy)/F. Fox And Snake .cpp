#include<bits/stdc++.h>

using namespace std;

int main() {

  int lines, signs;
  cin >> lines >> signs;

  int flag = 0;

  for (int i = 1; i <= lines; i++) {
    if (i % 2 != 0) {
      for (int j = 0; j < signs; j++) {
        cout << "#";
      }
      cout << endl;
    } else if (i % 2 == 0) {
      if (flag == 0) {
        for (int j = 0; j < signs - 1; j++) {
          cout << ".";
        }
        cout << "#";
        cout << endl;
        flag = 1;
      } else {
        cout << "#";
        for (int j = 0; j < signs - 1; j++) {
          cout << ".";
        }
        cout << endl;
        flag = 0;
      }
    }
  }

}

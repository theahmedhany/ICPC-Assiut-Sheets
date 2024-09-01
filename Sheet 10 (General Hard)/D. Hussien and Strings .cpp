#include <bits/stdc++.h>

using namespace std;

int main() {

  string txt_1, txt_2;
  cin >> txt_1 >> txt_2;

  if (txt_1.size() != txt_2.size()) {
    cout << "NO";
    return 0;
  }

  int flag = 0;

  if (txt_1 == txt_2) {
    sort(txt_1.begin(), txt_1.end());

    for (int i = 0; i < txt_1.size() - 1; i++) {
      if (txt_1[i] == txt_1[i + 1]) {
        flag = 1;
        break;
      }
    }

    if (flag == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    int not_equal = 0;
    int first;
    int second;
    int counter = 0;
    bool finish = true;

    for (int i = 0; i < txt_1.size(); i++) {
      if (txt_1[i] != txt_2[i]) {
        not_equal++;
        counter++;
      }

      if (not_equal == 1 && finish) {
        first = i;
        finish = false;
      }

      if (not_equal == 2) {
        second = i;
        break;
      }
    }
    if (counter == 2) {
      swap(txt_1[first] , txt_1[second]);
      if (txt_1 == txt_2) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  }

}

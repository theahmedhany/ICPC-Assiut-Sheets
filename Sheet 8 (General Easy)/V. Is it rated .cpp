#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int flag_1 = 0;
  int flag_2 = 0;

  int test = 0;

  for (int i = 0; i < size; i++) {
    int score_1, score_2;
    cin >> score_1 >> score_2;

    if (score_1 != score_2) {
      flag_1 = 1;
      break;
    }

    if (test < score_1 && i != 0) {
      flag_2 = 1;
    }

    test = score_1;
  }

  if (flag_1 == 1) {
    cout << "rated" << endl;
  } else if (flag_2 == 1) {
    cout << "unrated" << endl;
  } else {
    cout << "maybe" << endl;
  }

}

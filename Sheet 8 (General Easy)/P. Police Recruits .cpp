#include <bits/stdc++.h>

using namespace std;

int main() {

  int events;
  cin >> events;

  int number;
  int police = 0;
  int problems = 0;

  for (int i = 0; i < events; i++) {
    cin >> number;

    if (number == -1) {
      if (police == 0) {
        problems++;
      } else {
        police--;
      }
    } else {
      police += number;
    }
  }

  cout << problems << endl;

}

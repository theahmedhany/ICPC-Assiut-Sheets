#include<bits/stdc++.h>

using namespace std;

int main() {

  int start, end;
  cin >> start >> end;

  int count = 0;

  for (int i = 0; i <= start; i++) {
    for (int j = 0; j <= start; j++) {
      int remaining = end - i - j;
      if (remaining >= 0 && remaining <= start) {
        count++;
      }
    }
  }

  cout << count << endl;

}

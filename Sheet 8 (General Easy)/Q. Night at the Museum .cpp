#include<bits/stdc++.h>

using namespace std;

int main() {

  string value;
  cin >> value;

  int start = 'a';
  int step = 0;

  for (int i = 0; i < value.size(); i++) {
    int result = abs(value[i] - start);

    if (result <= 13) {
      step += result;
    } else {
      step += (26 - result);
    }

    start = value[i];
  }

  cout << step << endl;

}

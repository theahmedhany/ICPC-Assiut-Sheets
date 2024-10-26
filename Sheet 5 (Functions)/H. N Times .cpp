#include <bits/stdc++.h>

using namespace std;

void Times(int times) {

  for (int i = 0; i < times; i++) {
    int number;
    string txt;

    cin >> number >> txt;

    for (int j = 0; j < number; j++) {
      cout << txt << " ";
    }

    cout << endl;
  }

}

int main() {

  int times;
  cin >> times;

  Times(times);

}

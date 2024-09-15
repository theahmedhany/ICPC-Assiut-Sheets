#include<bits/stdc++.h>

using namespace std;

int main() {

  char symbol;
  cin >> symbol;

  int lines;
  cin >> lines;

  for (int i = 1; i <= lines; i++) {
    int times;
    cin >> times;

    for (int j = 1; j <= times; j++) {
      cout << symbol;
    }
    cout << endl;
  }

}

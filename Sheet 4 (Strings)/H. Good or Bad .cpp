#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  while (size--) {
    string word;
    cin >> word;

    int n = word.size();
    bool flag = false;

    for (int i = 0; i < n - 2; i++) {
      if ((word[i] == '0' && word[i + 1] == '1' && word[i + 2] == '0') ||
          (word[i] == '1' && word[i + 1] == '0' && word[i + 2] == '1')) {
        cout << "Good\n";
        flag = true;
        break;
      }
    }

    if (!flag) {
      cout << "Bad\n";
    }
  }

}

#include<bits/stdc++.h>

using namespace std;

int main() {

  int number;
  cin >> number;

  while (number--) {
    string word;
    cin >> word;

    int size = word.size();

    if (size <= 10) {
      cout << word << endl;
    } else {
      cout << word[0] << (size - 2) << word[size - 1] << endl;
    }
  }

}

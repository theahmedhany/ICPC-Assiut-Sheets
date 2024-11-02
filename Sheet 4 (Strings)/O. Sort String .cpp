#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int count[26] = {0};

  for (int i = 0; i < size; i++) {
    char word;
    cin >> word;

    int index = word - 'a';
    count[index]++;
  }

  for (int i = 0; i < 26; i++) {
    char word = i + 'a';
    while (count[i] > 0) {
      cout << word;
      count[i]--;
    }
  }

  cout << endl;

}

#include<bits/stdc++.h>

using namespace std;

int main() {

  string word;
  cin >> word;

  int size = word.size();

  for (int i = 0; i < size; i++) {
    if (word[i] == ',') {
      cout << " ";
      continue;
    }

    if (isupper(word[i])) {
      word[i] = tolower(word[i]);
    } else {
      word[i] = toupper(word[i]);
    }

    cout << word[i];
  }

}

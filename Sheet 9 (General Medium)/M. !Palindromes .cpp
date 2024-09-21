#include<bits/stdc++.h>

using namespace std;

int main() {

  string word;
  cin >> word;

  int size = word.size();
  int arrow = size - 1;
  bool not_palindrome = false;

  for (int i = 0; i < size; i++) {
    if (word[i] != word[arrow]) {
      not_palindrome = true;
    }
    arrow--;
  }

  if (not_palindrome) {
    cout << size << endl;
    return 0;
  }

  long long distinct_chars[10000];

  for (int i = 0; i < size; i++) {
    distinct_chars[word[i]]++;
  }

  long long result = 0;

  for (int i ='a'; i <= 'z'; i++) {
    if (distinct_chars[i] > 0) {
      result++;
    }
  }

  if (result == 1) {
    cout << 0;
  } else {
    cout << size - 1 << endl;
  }

}

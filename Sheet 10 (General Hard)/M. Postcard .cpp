#include <bits/stdc++.h>

using namespace std;

int main(){

  string password;
  int target_size;
  cin >> password >> target_size;

  int actual_size = 0, wildcard_count = 0, asterisk_count = 0;

  for (char ch : password) {
    if (ch != '?' && ch != '*') {
      actual_size++;
    } else {
      wildcard_count++;
      if (ch == '*') {
        asterisk_count++;
      }
    }
  }

  if (actual_size == target_size) {
    for (char ch : password) {
      if (ch != '?' && ch != '*') {
        cout << ch;
      }
    }
  } else if (actual_size > target_size) {
    int chars_to_remove = actual_size - target_size;
    if (wildcard_count >= chars_to_remove) {
      int removed_chars = 0;
      for (int i = 0; i < password.size(); i++) {
        if (removed_chars < chars_to_remove && (password[i + 1] == '?' || password[i + 1] == '*')) {
          removed_chars++;
        } else if (password[i] != '?' && password[i] != '*') {
          cout << password[i];
        }
      }
    } else {
      cout << "Impossible";
    }
  } else {
    if (asterisk_count == 0) {
      cout << "Impossible";
    } else {
      bool expanded = false;
      for (int i = 0; i < password.size(); i++) {
        if (password[i] != '?' && password[i] != '*') {
          cout << password[i];
        } else if (password[i] == '*' && !expanded) {
          for (int j = 0; j < target_size - actual_size; j++) {
            cout << password[i - 1];
          }
          expanded = true;
        }
      }
    }
  }

}

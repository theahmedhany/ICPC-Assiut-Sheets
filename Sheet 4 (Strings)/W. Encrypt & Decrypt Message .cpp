#include <bits/stdc++.h>

using namespace std;

int main() {

  string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

  int quarter;
  cin >> quarter;

  string txt;
  cin >> txt;

  int size = txt.size();

  if (quarter == 1) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < original.size(); j++) {
        if (txt[i] == original[j]) {
          cout << key[j];
          break;
        }
      }
    }
  } else {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < key.size(); j++) {
        if (txt[i] == key[j]) {
          cout << original[j];
          break;
        }
      }
    }
  }

  cout << endl;

}

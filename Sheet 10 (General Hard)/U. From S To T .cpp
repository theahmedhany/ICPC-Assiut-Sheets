#include <bits/stdc++.h>

using namespace std;

bool check_operation(string txt_1, string txt_2) {

  if (txt_1.size() > txt_2.size()) {
    return false;
  }

  int index = 0;

  for (int i = 0; i < txt_2.size(); i++) {
    if (txt_1[index] == txt_2[i]) {
      index++;
    }

    if (index == txt_1.size()) {
      return true;
    }
  }

  return false;

}

void solve_operation() {

  string txt_1, txt_2, txt_3;
  cin >> txt_1 >> txt_2 >> txt_3;

  if (check_operation(txt_1, txt_2)) {
    map<char, int> first_map;
    map<char, int> second_map;

    for (int i = 0; i < txt_1.size(); i++) {
      first_map[txt_1[i]]++;
    }

    for (int i = 0; i < txt_2.size(); i++) {
      second_map[txt_2[i]]++;
    }

    for (int i = 0; i < txt_3.size(); i++) {
      first_map[txt_3[i]]++;
    }

    map<char, int>::iterator general_iterator;

    for (general_iterator = second_map.begin(); general_iterator != second_map.end(); ++general_iterator) {
      char first_iterator = general_iterator -> first;
      int second_iterator = general_iterator -> second;

      if (first_map[first_iterator] < second_iterator) {
        cout << "NO" << endl;
        return;
      }
    }
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}

int main() {

  int cases;
  cin >> cases;

  while (cases--) {
    solve_operation();
  }

}
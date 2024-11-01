#include <bits/stdc++.h>

using namespace std;

int main() {

  int size, query;
  cin >> size >> query;

  string txt;
  cin >> txt;

  int scope_1, scope_2, position;

  while (query--) {
    string operation;
    cin >> operation;

    if (operation == "pop_back") {
      txt.pop_back();
    } else if (operation == "front") {
      cout << txt.front() << endl;
    } else if (operation == "back") {
      cout << txt.back() << endl;
    } else if (operation == "sort") {
      cin >> scope_1 >> scope_2;

      if (scope_1 > scope_2) {
        swap(scope_1, scope_2);
      }
      sort(txt.begin() + scope_1 - 1, txt.begin() + scope_2);
    } else if (operation == "reverse") {
      cin >> scope_1 >> scope_2;

      if (scope_1 > scope_2) {
        swap(scope_1, scope_2);
      }
      reverse(txt.begin() + scope_1 - 1, txt.begin() + scope_2);
    } else if (operation == "print") {
      cin >> position;
      cout << txt[position - 1] << endl;
    } else if (operation == "substr") {
      cin >> scope_1 >> scope_2;

      if (scope_1 > scope_2) {
        swap(scope_1, scope_2);
      }
      cout << txt.substr(scope_1 - 1, scope_2 - scope_1 + 1) << endl;
    } else if (operation == "push_back") {
      char final_character;
      cin >> final_character;
      txt.push_back(final_character);
    }
  }

}

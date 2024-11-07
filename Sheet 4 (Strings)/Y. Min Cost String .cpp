#include <bits/stdc++.h>

using namespace std;

int main() {

  string value;
  cin >> value;

  int cost[26];

  for (int i = 0; i < 26; i++) {
    cin >> cost[i];
  }

  int size = value.size();

  for (int i = 0; i < size; i++) {
    if (value[i] == '?') {
      int counter = 0;

      for (int j = i; j < size && value[j] == '?'; j++) {
        counter++;
      }

      if (counter == size) {
        cout << "0" << endl;
        for (int j = 0; j < size; j++) {
          cout << "a";
        }
        return 0;
      }

      if (i == 0) {
        int min_cost = INT_MAX;
        int best_char;

        for (int j = 0; j < value[counter] - 97 + 1; j++) {
          int my_cost = abs(cost[value[counter] - 97] - cost[j]);
          if (my_cost < min_cost) {
            min_cost = my_cost;
            best_char = j;
          }
        }

        char fill_char = best_char + 'a';
        for (int j = 0; j < counter; j++) {
          value[j] = fill_char;
        }

        i += counter - 1;
      } else if (i + counter == size) {
        int max_cost = INT_MAX;
        int best_char;

        for (int j = 0; j < value[i - 1] - 97 + 1; j++) {
          int my_cost = abs(cost[value[i - 1] - 97] - cost[j]);
          if (my_cost < max_cost) {
            max_cost = my_cost;
            best_char = j;
          }
        }

        char fill_char = best_char + 'a';
        for (int j = i; j < size; j++) {
          value[j] = fill_char;
        }

        break;
      } else {
        int max_cost = INT_MAX;
        int best_char;

        for (int j = 0; j < 26; j++) {
          int my_cost = abs(cost[value[i - 1] - 97] - cost[j]) + abs(cost[j] - cost[value[i + counter] - 97]);
          if (my_cost < max_cost) {
            max_cost = my_cost;
            best_char = j;
          }
        }

        char fill_char = best_char + 'a';
        for (int j = i; j < i + counter; j++) {
          value[j] = fill_char;
        }

        i += counter - 1;
      }
    }
  }

  long long final_cost = 0;

  for (int i = 0; i < size - 1; i++) {
    final_cost += abs(cost[value[i] - 'a'] - cost[value[i + 1] - 'a']);
  }

  cout << final_cost << endl;
  cout << value << endl;

}

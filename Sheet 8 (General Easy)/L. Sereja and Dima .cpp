#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  int start = 0, end = size - 1;
  int score_player_1 = 0, score_player_2 = 0;
  int max_value = 0, turn = 0;

  while (start <= end) {
    if (arry[start] >= arry[end]) {
      max_value = arry[start];
      start++;
    } else {
      max_value = arry[end];
      end--;
    }

    if (turn % 2 == 0) {
      score_player_1 += max_value;
    } else {
      score_player_2 += max_value;
    }

    turn++;
  }

  cout << score_player_1 << " " << score_player_2 << endl;

}

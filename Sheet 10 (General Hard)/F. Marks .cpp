#include <bits/stdc++.h>

using namespace std;

int main() {

  int students, subjects;
  cin >> students >> subjects;

  char arry_1[students * subjects];
  char arry_2[subjects];

  for (int i = 0; i < students * subjects; i++) {
    cin >> arry_1[i];
  }

  int index = 0;

  for (int i = 0; i < subjects; i++) {
    int max = arry_1[i];

    for (int j = i + subjects; j < students * subjects; j += subjects) {
      if (max < arry_1[j] && (j - i) % subjects == 0) {
        max = arry_1[j];
      }
    }

    arry_2[index] = max;
    index++;
  }

  int best = 0;

  for (int i = 0; i < students; i++) {
    int test_number = 0;
    for (int j = i * subjects; j < (i + 1) * subjects; j++) {
      if (arry_1[j] == arry_2[test_number]) {
        best++;
        break;
      }
      test_number++;
    }
  }

  cout << best;

}

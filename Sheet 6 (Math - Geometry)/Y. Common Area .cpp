#include <bits/stdc++.h>

using namespace std;

int main() {

  long long test_cases;
  cin >> test_cases;

  int case_counter = 1;

  while (case_counter <= test_cases) {
    long long rectangles_number;
    cin >> rectangles_number;

    long long bottom_left_x, bottom_left_y, top_right_x, top_right_y;
    cin >> bottom_left_x >> bottom_left_y >> top_right_x >> top_right_y;

    long long max_bottom_left_x = bottom_left_x;
    long long max_bottom_left_y = bottom_left_y;

    long long min_top_right_x = top_right_x;
    long long min_top_right_y = top_right_y;

    for (int i = 1; i < rectangles_number; i++) {
      cin >> bottom_left_x >> bottom_left_y >> top_right_x >> top_right_y;

      max_bottom_left_x = max(max_bottom_left_x, bottom_left_x);
      max_bottom_left_y = max(max_bottom_left_y, bottom_left_y);

      min_top_right_x = min(min_top_right_x, top_right_x);
      min_top_right_y = min(min_top_right_y, top_right_y);
    }

    if (min_top_right_x > max_bottom_left_x && min_top_right_y > max_bottom_left_y) {
      long long width = min_top_right_x - max_bottom_left_x;
      long long height = min_top_right_y - max_bottom_left_y;

      cout << "Case #" << case_counter << ": " << width * height << endl;
    } else {
      cout << "Case #" << case_counter << ": 0" << endl;
    }

    case_counter++;
  }

}

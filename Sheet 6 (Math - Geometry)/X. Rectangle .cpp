#include <bits/stdc++.h>

using namespace std;

int main() {

  long long point_1_x, point_1_y, point_2_x, point_2_y, point_3_x, point_3_y, point_4_x, point_4_y;
  cin >> point_1_x >> point_1_y >> point_2_x >> point_2_y >> point_3_x >> point_3_y >> point_4_x >> point_4_y;

  long long min_x = min(min(point_1_x, point_2_x) , min(point_3_x, point_4_x));
  long long max_x = max(max(point_1_x, point_2_x) , max(point_3_x, point_4_x));
  long long min_y = min(min(point_1_y, point_2_y) , min(point_3_y, point_4_y));
  long long max_y = max(max(point_1_y, point_2_y) , max(point_3_y, point_4_y));

  long long points;
  cin >> points;

  for (int i = 0; i < points; i++) {
    long long points_x, points_y;
    cin >> points_x >> points_y;

    if (points_x >= min_x && points_x <= max_x && points_y >= min_y && points_y <= max_y) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

}

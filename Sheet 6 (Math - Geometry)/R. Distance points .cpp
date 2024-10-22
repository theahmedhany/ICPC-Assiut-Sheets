#include <bits/stdc++.h>

using namespace std;

int main() {

  double point_1_x, point_1_y;
  double point_2_x, point_2_y;

  cin >> point_1_x >> point_1_y >> point_2_x >> point_2_y;

  double delta_x = point_1_x - point_2_x;
  double delta_y = point_1_y - point_2_y;

  double answer = sqrt((delta_x * delta_x) + (delta_y * delta_y));

  cout << fixed << setprecision(9) << answer << endl;

}

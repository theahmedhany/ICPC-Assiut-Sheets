#include <bits/stdc++.h>

using namespace std;

int main() {

  double point1_x, point1_y, point2_x, point2_y, point3_x, point3_y, point4_x, point4_y;
  cin >> point1_x >> point1_y >> point2_x >> point2_y >> point3_x >> point3_y >> point4_x >> point4_y;

  double mid_point1_x = (point1_x + point2_x) / 2;
  double mid_point1_y = (point1_y + point2_y) / 2;
  double mid_point2_x = (point3_x + point4_x) / 2;
  double mid_point2_y = (point3_y + point4_y) / 2;

  double radius_1 = sqrt(pow(point1_x - point2_x , 2) + pow(point1_y - point2_y , 2)) / 2;
  double radius_2 = sqrt(pow(point3_x - point4_x , 2) + pow(point3_y - point4_y , 2)) / 2;
  double line = sqrt(pow(mid_point1_x - mid_point2_x , 2) + pow(mid_point1_y - mid_point2_y , 2));
  double sum_radius = radius_1 + radius_2;

  if (line > sum_radius) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }

}

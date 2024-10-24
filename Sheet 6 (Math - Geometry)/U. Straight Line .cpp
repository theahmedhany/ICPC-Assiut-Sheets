#include <bits/stdc++.h>

using namespace std;

int main() {

  int point_1_x, point_1_y, point_2_x, point_2_y, point_3_x, point_3_y;
  cin >> point_1_x >> point_1_y >> point_2_x >> point_2_y >> point_3_x >> point_3_y;

  int result_1 = (point_3_y - point_2_y) * (point_2_x - point_1_x);
  int result_2 = (point_2_y - point_1_y) * (point_3_x - point_2_x);

  if (result_1 == result_2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}


#include <bits/stdc++.h>

using namespace std;

bool triangle(int x1, int y1, int x2, int y2, int x3, int y3) {

  if ((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3))
    return false;

  int angle_1 = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
  int angle_2 = ((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3));
  int angle_3 = ((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3));

  vector<int> lesson = {angle_1, angle_2, angle_3};
  sort(lesson.begin(), lesson.end());

  return (lesson[0] + lesson[1] == lesson[2]);

}

int main() {

  cin.tie(0);
  cout.sync_with_stdio(0);

  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  if (triangle(x1, y1, x2, y2, x3, y3)) {
    cout << "RIGHT" << endl;
  } else if (
    triangle(x1 + 1, y1, x2, y2, x3, y3) || triangle(x1 - 1, y1, x2, y2, x3, y3) ||
    triangle(x1, y1 + 1, x2, y2, x3, y3) || triangle(x1, y1 - 1, x2, y2, x3, y3) ||
    triangle(x1, y1, x2 + 1, y2, x3, y3) || triangle(x1, y1, x2 - 1, y2, x3, y3) ||
    triangle(x1, y1, x2, y2 + 1, x3, y3) || triangle(x1, y1, x2, y2 - 1, x3, y3) ||
    triangle(x1, y1, x2, y2, x3 + 1, y3) || triangle(x1, y1, x2, y2, x3 - 1, y3) ||
    triangle(x1, y1, x2, y2, x3, y3 + 1) || triangle(x1, y1, x2, y2, x3, y3 - 1)
  ) {
    cout << "ALMOST" << endl;
  } else {
    cout << "NEITHER" << endl;
  }

}

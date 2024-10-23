#include <bits/stdc++.h>

using namespace std;

int main() {

  long long x_coordinate, y_coordinate, radius, points;
  cin >> x_coordinate >> y_coordinate >> radius >> points;

  long long x_axes[1000];
  long long y_axes[1000];

  for (int i = 0; i < points; i++) {
    cin >> x_axes[i] >> y_axes[i];
  }

  for (int i = 0; i < points; i++) {
    long long dx = x_coordinate - x_axes[i];
    long long dy = y_coordinate - y_axes[i];
    double distance = sqrt(pow(dx, 2) + pow(dy, 2));

    if (distance > radius) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

}

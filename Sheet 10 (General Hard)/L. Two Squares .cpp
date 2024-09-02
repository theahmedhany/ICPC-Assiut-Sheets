#include <bits/stdc++.h>

using namespace std;

int main() {

  double length, square_1, square_2, queries_number;
  cin >> length >> square_1 >> square_2 >> queries_number;

  for (int i = 0; i < queries_number; i++) {
    double query;
    cin >> query;

    double time = sqrt(2) * (length - sqrt(query)) / (square_2 - square_1);
    cout << fixed << setprecision(6) << abs(time) << endl;
  }

}

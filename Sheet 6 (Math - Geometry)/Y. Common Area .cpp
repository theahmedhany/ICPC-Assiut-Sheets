#include <bits/stdc++.h>

using namespace std;

int main() {

  long long test_cases;
  cin >> test_cases;

  int counter = 1;

  while(counter <= test_cases){

		long long number;
		cin >> number;

		long long point_1_x, point_1_y, point_2_x, point_2_y;
		cin >> point_1_x >> point_1_y >> point_2_x >> point_2_y;

		long long max_1_x = point_1_x;
		long long max_1_y = point_1_y;

		long long min_x_2 = point_2_x;
		long long min_y_2 = point_2_y;

		for(int i = 1; i < number; i++){

			cin >> point_1_x >> point_1_y >> point_2_x >> point_2_y;

			max_1_x = max(max_1_x, point_1_x);
			max_1_y = max(max_1_y, point_1_y);
			
			min_x_2 = min(min_x_2, point_2_x);
			min_y_2 = min(min_y_2, point_2_y);

		}

		if(min_x_2 > max_1_x && min_y_2 > max_1_y) {
			cout << "Case #" << counter << ": " << (min_x_2 - max_1_x) * (min_y_2 - max_1_y) << endl;
		} else {
			cout << "Case #" << counter << ": " << 0 << endl;
		}

		counter++;

	}

}

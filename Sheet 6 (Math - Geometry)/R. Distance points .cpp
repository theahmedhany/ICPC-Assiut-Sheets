#include <bits/stdc++.h>

using namespace std;

int main() {

	double point_1_x, point_1_y;
	double point_2_x, point_2_y;
	
	cin >> point_1_x >> point_1_y >> point_2_x >> point_2_y;

	double distance_1 = point_1_x - point_2_x;
	double distance_2 = point_1_y - point_2_y;

	double answer = sqrt((distance_1 * distance_1) + (distance_2 * distance_2));

	cout << fixed << setprecision(9) << answer << endl;

}

#include <bits/stdc++.h>

using namespace std;

int main() {

	int point_1_x, point_1_y, point_2_x, point_2_y, point_3_x, point_3_y, point_4_x, point_4_y;
	cin >> point_1_x >> point_1_y >> point_2_x >> point_2_y >> point_3_x >> point_3_y >> point_4_x >> point_4_y;

	long long line_1_x = point_2_x - point_1_x;
	long long line_1_y = point_2_y - point_1_y;
	
	long long line_2_x = point_4_x - point_3_x;
	long long line_2_y = point_4_y - point_3_y;
	
	if(line_1_x * line_2_y == line_2_x * line_1_y){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}

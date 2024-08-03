#include <bits/stdc++.h>

using namespace std;

int main() {

	long long x_axes[1000];
	long long y_axes[1000];

	long long x_coordinate, y_coordinate, radius, points;
	cin >> x_coordinate >> y_coordinate >> radius >> points;

	for(int i = 0; i < points; i++){
		cin >> x_axes[i] >> y_axes[i];
	}
	
	for(int i = 0; i < points; i++){
		long long x1 = x_coordinate - x_axes[i];
		long long y1 = y_coordinate - y_axes[i];

		double result = sqrt(pow(x1 , 2) + pow(y1 , 2));

		if(result > radius){
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

}

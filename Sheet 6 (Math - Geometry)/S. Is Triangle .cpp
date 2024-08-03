#include <bits/stdc++.h>

using namespace std;

int main() {

	double number_1, number_2, number_3;
	cin >> number_1 >> number_2 >> number_3;

	if(number_1 + number_2 > number_3 && number_1 + number_3 > number_2 && number_2 + number_3 > number_1){
		double sum = number_1 + number_2 + number_3;
		
		cout << "Valid" << endl;
		cout << fixed << setprecision(6) << sqrt((sum / 2) * (sum / 2 - number_1) * (sum / 2 - number_2) * (sum / 2 - number_3));
	} else {
		cout << "Invalid" << endl;
	}

}

#include<bits/stdc++.h>

using namespace std;

int main(){

	int counter;
	cin >> counter;

	int min;
	int max;

	int number_1;
	int number_2;

	for (int i = 1; i <= counter; i++) {
		cin >> number_1 >> number_2;

		if (number_1 >= number_2) {
			max = number_1;
			min = number_2;
		} else {
			max = number_2;
			min = number_1;
		}

		int sum = 0;

		for (int j = min + 1; j < max; j++) {
			if (j % 2 != 0) {
				sum += j;
			}
		}

		cout << sum << endl;
		sum = 0;
	}

}
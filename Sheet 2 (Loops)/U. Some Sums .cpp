#include<bits/stdc++.h>

using namespace std;

int main(){

	int number, range_1, range_2;
	cin >> number >> range_1 >> range_2;

	int sum = 0;

	for (int i = 1; i <= number; i++) {
		int test_1 = i, test_2 = 0;

		while (test_1 > 0) {

			int example = test_1 % 10;

			test_2 += example;
			test_1 /= 10;

		}

		if (test_2 >= range_1 && test_2 <= range_2) {
			sum += i;
		}
	}

	cout << sum;

}
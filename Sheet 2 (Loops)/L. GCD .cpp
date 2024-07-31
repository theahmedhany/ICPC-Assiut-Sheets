#include<bits/stdc++.h>

using namespace std;

int main(){

	int example_1, example_2;
	cin >> example_1 >> example_2;

	int number = 0, test = 0;

	if (example_1 > example_2) {
		for (int i = 1; i <= example_2; i++) {
			if (example_1 % i == 0 && example_2 % i == 0) {
				test = i;

				if (test > number) {
					number = test;
				}
			}
		}
	} else {
		for (int i = 1; i <= example_1; i++) {
			if (example_1 % i == 0 && example_2 % i == 0) {
				test = i;

				if (test > number) {
					number = test;
				}
			}
		}
	}

	cout << number;

}

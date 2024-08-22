#include<bits/stdc++.h>

using namespace std;

int main() {

	int size;
	cin >> size;

	int number_1, number_2;
	int count = 0;

	while (size > 0) {

		cin >> number_1 >> number_2;

		if (number_1 + 2 <= number_2) {
			count++;
		}

		size--;

	}

	cout << count;

}
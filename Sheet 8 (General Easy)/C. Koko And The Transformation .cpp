#include <bits/stdc++.h>

using namespace std;

int main() {

	int size_1, size_2;
	int sum_1 = 0;
	int sum_2 = 0;

	cin >> size_1 >> size_2;

	int arry_1[size_1], arry_2[size_2];

	for (int i = 0; i < size_1; i++) {
		cin >> arry_1[i];
		sum_1 += arry_1[i];
	}

	for (int j = 0; j < size_2; j++) {
		cin >> arry_2[j];
		sum_2 += arry_2[j];
	}

	if (sum_1 == sum_2) {
		cout << "Yes";
	} else {
		cout << "No";
	}

}
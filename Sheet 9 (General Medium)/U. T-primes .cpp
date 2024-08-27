#include<bits/stdc++.h>

using namespace std;

long long arry[1000001] = {0};

int main(){

	arry[1] = 1;

	for (long long i = 2; i <= 1000; i++) {
		for (long long j = 2 * i; j <= 1000000; j += i) {
			arry[j] = 1;
		}
	}

	int size;
	cin >> size;

	while (size--) {
		long long number;
		cin >> number;

		long long number_sqrt = sqrt(number);

		if ((number_sqrt * number_sqrt) == number && arry[number_sqrt] == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

}

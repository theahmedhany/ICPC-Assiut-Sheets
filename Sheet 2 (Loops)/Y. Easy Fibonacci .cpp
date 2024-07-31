#include<bits/stdc++.h>

using namespace std;

int main(){

	int number;
	cin >> number;

	int fibonacci[number + 5];

	fibonacci[1] = 0;
	fibonacci[2] = 1;

	for (int i = 1; i <= number; i++) {
		if (i == 1 || i == 2) {
			cout << fibonacci[i] << " ";
		} else {
			fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]);

			cout << fibonacci[i] << " ";
		}
	}

}
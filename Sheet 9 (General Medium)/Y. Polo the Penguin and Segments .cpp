#include<bits/stdc++.h>

using namespace std;

int main(){

	long long size, number;
	cin >> size >> number;

	long long cover = 0;

	for (int i = 0; i < size; i++) {
		int first, second;
		cin >> first >> second;

		cover += (second - first + 1);
	}

	cover %= number;

	if (cover == 0) {
		cout << 0;
	} else {
		cout << number - cover;
	}

}

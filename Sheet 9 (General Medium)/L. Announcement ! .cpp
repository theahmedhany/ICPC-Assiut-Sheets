#include<bits/stdc++.h>

using namespace std;

long long level_arry[10000001] = {0};

int main(){

	long long size;
	cin >> size;

	long long arry[size];

	for (long long i = 0; i < size; i++) {
		cin >> arry[i];
		level_arry[arry[i]]++;
	}

	long long result = 0;

	for (long long i = 0; i < 10000001; i++) {
		if (level_arry[i] > 1) {
			result += level_arry[i] - 1;
		}
	}

	if (result == 0) {
		cout << -1;
	} else {
		cout << result;
	}

}

#include<bits/stdc++.h>

using namespace std;

int main(){

	long long size;
	cin >> size;

	long long arry[size];

	for(int i = 0; i < size; i++){
		cin >> arry[i];
	}

	long long min_value, max_value;

	for(int i = 0; i < size; i++){
		if (i == 0) {
			min_value = abs(arry[i] - arry[i + 1]);
			max_value = abs(arry[i] - arry[size - 1]);
		} else if (i == size - 1) {
			min_value = abs(arry[i] - arry[i - 1]);
			max_value = abs(arry[i] - arry[0]);
		} else {
			min_value = min(abs(arry[i] - arry[i + 1]) , abs(arry[i] - arry[i - 1]));
			max_value = max(abs(arry[i] - arry[0]) , abs(arry[i] - arry[size - 1]));
		}

		cout << min_value << " " << max_value << endl;
	}

}

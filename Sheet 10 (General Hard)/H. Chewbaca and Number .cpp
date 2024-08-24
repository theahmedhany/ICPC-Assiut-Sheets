#include<bits/stdc++.h>

using namespace std;

int main (){

	string number;
	cin >> number;

	long long size = number.size();
	char result[size];

	for (int i = 0; i < number.size(); i++) {
		if (i == 0 && number[i] == '9') {
			result[i] = number[i];
		} else if (number[i] >= '5') {
			result[i] = '9' - number[i] + '0';
		} else {
			result[i] = number[i];
		}
	}

	for (int i = 0; i < size; i++) {
		cout << result[i];
	}

}

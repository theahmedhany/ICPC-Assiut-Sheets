#include <bits/stdc++.h>

using namespace std;

int main() {

	int size_1, size_2;
	cin >> size_1 >> size_2;

	int number;
	int sum_1 = 0, sum_2 = 0;

	for(int i = 0; i < size_1; i++){
		cin >> number;
		sum_1 += number;
	}

	for(int i = 0; i < size_2; i++){
		cin >> number;
		sum_2 += number;
	}

	if(sum_1 == sum_2){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}

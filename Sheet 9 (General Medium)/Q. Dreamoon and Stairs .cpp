#include<bits/stdc++.h>

using namespace std;

int main(){

	int steps, number;
	cin >> steps >> number;

	int min;

	if (steps % 2 == 0) {
		min = steps / 2;
	} else {
		min = (steps / 2) + 1;
	}

	for (int i = min; i <= steps; i++) {
		if(i % number == 0){
			cout << i;
			return 0;
		}
	}

	cout << -1;

}

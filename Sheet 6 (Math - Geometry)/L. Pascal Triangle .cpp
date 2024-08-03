#include<bits/stdc++.h>

using namespace std;

int main() {

	long long size;
	cin >> size;

	int value;

	for(int i = 0; i < size; i++){

		value = 1;
		for(int j = 0; j <= i; j++){

			cout << value << " ";
			value = value * (i - j) / (j + 1);
			
		}

		cout << endl;

	}

}

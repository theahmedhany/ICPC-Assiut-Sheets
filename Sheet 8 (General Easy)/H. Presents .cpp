#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int size;
	cin >> size;

	int arry_1[size], arry_2[size];

	for (int i = 0; i < size; i++) {

		cin >> arry_1[i];
		arry_2[arry_1[i] - 1] = i + 1;

	}

	for (int i = 0; i < size; i++) {

		cout << arry_2[i] << " ";
		
	}
	
}
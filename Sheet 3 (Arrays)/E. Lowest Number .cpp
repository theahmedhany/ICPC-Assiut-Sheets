#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	int arry[size];

	int min = 1e5;
	int index = 0;

	for (int i = 0; i < size; i++) {
		cin >> arry[i];

		if (arry[i] < min) {
			min = arry[i];
			index = i + 1;
		}
	}

	cout << min << " " << index;

}

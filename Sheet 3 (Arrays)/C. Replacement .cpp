#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	int arry[size];

	for (int i = 0; i < size; i++) {
		cin >> arry[i];
	}

	for (int j = 0; j < size; j++) {
		if (arry[j] > 0)
			cout << 1 << " ";
		else if (arry[j] < 0)
			cout << 2 << " ";
		else
			cout << 0 << " ";
	}

}
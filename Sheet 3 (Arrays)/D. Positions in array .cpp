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
		if (arry[j] <= 10) {
			cout << "A[" << j << "] = " << arry[j] << endl;
		}
	}

}

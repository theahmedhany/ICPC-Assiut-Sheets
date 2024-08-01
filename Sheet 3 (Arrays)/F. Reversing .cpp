#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	int arry[size];

	for (int i = 1; i <= size; i++) {
		cin >> arry[i];
	}

	for (int j = size; j >= 1; j--) {
		cout << arry[j] <<" ";
	}

}

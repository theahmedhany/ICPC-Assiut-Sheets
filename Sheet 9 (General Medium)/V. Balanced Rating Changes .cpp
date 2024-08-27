#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	int arry[size];

	for (int i = 0; i < size; i++) {
		cin >> arry[i];
	}

	bool flag = 0;

	for (int i = 0; i < size; i++) {
		double rate = (double) arry[i] / 2;

		if (arry[i] % 2 == 0) {
			arry[i] = arry[i] / 2;
		} else {
			if (flag == 0) {
				arry[i] = ceil(rate);
				flag = 1;
			} else {
				arry[i] = floor(rate);
				flag = 0;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arry[i] << endl; 
	}

}
